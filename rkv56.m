function [wi, ti, count] = rkv56 ( RHS, t0, x0, tf, parms )

%RKV56     approximate the solution of the initial value problem
%
%                       x'(t) = RHS( t, x ),    x(t0) = x0
%
%          using Runge-Kutta-Verner 5th order - 6th order method - 
%          this routine will work for a system of first-order equations 
%          as well as for a single equation
%
%     calling sequences:
%             [wi, ti] = rkv56 ( RHS, t0, x0, tf, parms )
%             rkv56 ( RHS, t0, x0, tf, parms )
%
%     inputs:
%             RHS     string containing name of m-file defining the 
%                     right-hand side of the differential equation;  the
%                     m-file must take two inputs - first, the value of
%                     the independent variable; second, the value of the
%                     dependent variable
%             t0      initial value of the independent variable
%             x0      initial value of the dependent variable(s)
%                     if solving a system of equations, this should be a 
%                     row vector containing all initial values
%             tf      final value of the independent variable
%             parms   three component vector of paramter values
%                     parm(1)      minimum allowed step size
%                     parm(2)      maximum allowed step size
%                     parm(3)      absolute error tolerance
%
%     output:
%             wi      vector / matrix containing values of the approximate 
%                     solution to the differential equation
%             ti      vector containing the values of the independent 
%                     variable at which an approximate solution has been
%                     obtained
%             count   number of function evaluations used in advancing the
%                     solution from t = t0 to t = tf
%

%%
% Parameter
gtol = 1E-7;

R = 25E-3;
m = 15E-3;
I = 0.4.*m.*R.^2;
I3 = 0.4.*m.*R.^2;
a = 5E-3;

%%

neqn = length ( x0 );
hmin = parms(1);
hmax = parms(2);
TOL  = parms(3);

ti(1) = t0;
wi(1:neqn, 1) = x0';
count = 0;
h = hmax;
i = 2;

% Conserved quantity
lambda = x0(2);
theta = x0(6);
ny = x0(3);
Gc = I.*R.*lambda.*sin(theta).^2+I3.*(R.*cos(theta)-a).*(lambda.* ...
           cos(theta)+ny);

while ( t0 < tf )
    k1 = h * feval ( RHS, t0, x0 );
	k2 = h * feval ( RHS, t0 + h/6, x0 + k1/6 );
	k3 = h * feval ( RHS, t0 + 4*h/15, x0 + 4*k1/75 + 16*k2/75 );
	k4 = h * feval ( RHS, t0 + 2*h/3, x0 + 5*k1/6 - 8*k2/3 + 5*k3/2 );
    k5 = h * feval ( RHS, t0 + 5*h/6, x0 - 165*k1/64 + 55*k2/6 - 425*k3/64 + 85*k4/96 );
	k6 = h * feval ( RHS, t0 + h, x0 + 12*k1/5 - 8*k2 + 4015*k3/612 - 11*k4/36 + 88*k5/255 );
	k7 = h * feval ( RHS, t0 + h/15, x0 - 8263*k1/15000 + 124*k2/75 - 643*k3/680 - 81*k4/250 + 2484*k5/10625 );
	k8 = h * feval ( RHS, t0 + h, x0 + 3501*k1/1720 - 300*k2/43 + 297275*k3/52632 - 319*k4/2322 + 24068*k5/84065 + 3850*k7/26703 );
	
	Rk = max ( abs ( k1/160 + 125*k3/17952 - k4/144 + 12*k5/1955 + 3*k6/44 - 125*k7/11592 - 43*k8/616 ) / h );
	q = 0.87 * ( TOL / Rk ) ^ (1/5);
	count = count + 8; 
	
    % Conserved quantity
    xt = x0 + 3*k1/40 + 875*k3/2244 + 23*k4/72 + 264*k5/1955 + 125*k7/11592 + 43*k8/616;
    lambda = xt(2);
    theta = xt(6);
    ny = xt(3);
    G = I.*R.*lambda.*sin(theta).^2+I3.*(R.*cos(theta)-a).*(lambda.* ...
           cos(theta)+ny);
       
	if ((Rk < TOL)&&((abs(abs(G)-abs(Gc))/h)<gtol))
        
       Gp(i-1) = abs(abs(G)-abs(Gc))/h;
       Gc = G;
       
       x0 = xt;
%      x0 = x0 + 13*k1/160 + 2375*k3/5984 + 5*k4/16 + 12*k5/85 + 3*k6/44;
	   t0 = t0 + h;

       ti(i) = t0;
       wi(1:neqn, i) = x0';
       
       figure(1);
       subplot(1,2,1);
       hold on;
       plot(ti(i-1),wi(7,i-1));
       subplot(1,2,2);
       hold on;
       plot(i-1,Gp(i-1));
       drawnow;
       
	   i = i + 1;	
       h = hmax;
	end;
	
	h = min ( max ( q, 0.1 ), 4.0 ) * h;
	if ( h > hmax ) h = hmax; end;
	if ( t0 + h > tf )
	   h = tf - t0;
	elseif ( h < hmin )
	   disp ( 'Solution requires step size smaller than minimum' );
	   return;
	end;
end;
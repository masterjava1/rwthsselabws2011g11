%=========================================================================
% 20.12.2011
%
% Alexander Fischer
% alexander.fischer@rwth-aachen.de
%
% files:
% RHS.m
%
% Input arguments:
% t,x
%
% Output:
% dx_dt
%=========================================================================

%%
% x = [my; lambda; ny; xi; omikron; theta; phi; psi; xc; yc]
function dx_dt = RHS(t,x)

g = 9.81;
R = 25E-3;
% k = 0.3;
k = 0;
m = 15E-3;
I = 0.4.*m.*R^2;
I3 = 0.4.*m.*R^2;
a = 5E-3;

dx_dt = zeros(10,1);
my = x(1);
lambda = x(2);
ny = x(3);
xi = x(4);
omikron = x(5);
theta = x(6);
phi = x(7);
psi = x(8);
xc = x(9);
yc = x(10);

% dmy_dt
dx_dt(1) = (-(I3-I).*lambda.^2.*sin(theta).*cos(theta)-I3.*lambda.* ...
    sin(theta).*ny+(g+a.*my.^2.*cos(theta)).*(-m.*a.*sin(theta)-k.* ...
    m.*(R-a.*cos(theta)).*(-xi.*sin(phi)+omikron.*cos(phi)-...
    (R-a.*cos(theta)).*my)))./(I+m.*a.^2.*sin(theta).^2+k.*m.*a.* ...
    sin(theta).*(R-a.*cos(theta)).*(-xi.*sin(phi)+omikron.*cos(phi)- ...
    (R-a.*cos(theta)).*my));

% dlambda_dt
dx_dt(2) = (-(2.*I-I3).*lambda.*my.*cos(theta)+I3.*my.*ny-k.*m.*...
    (g+a.*cos(theta).*my.^2+a.*sin(theta).*dx_dt(1)).* ...
    (a-R.*cos(theta)).*(xi.*cos(phi)+omikron.*sin(phi)+(a.*lambda+ny.* ...
    R).*sin(theta)))./(I.*sin(theta));

% dny_dt
dx_dt(3) = (-I3.*(dx_dt(2).*cos(theta)-lambda.*my.*sin(theta))-k.*m.*...
    (g+a.*cos(theta).*my.^2+a.*sin(theta).*dx_dt(1).^2).* ...
    (R.*sin(theta)).*(xi.*cos(phi)+omikron.*sin(phi)+(a.*lambda+ny.*R).*...
    sin(phi)))./I3;

% dxi_dt
dx_dt(4) = (-k.*(g+a.*cos(theta).*my.^2+a.*sin(theta).*dx_dt(1)).* ...
    (xi+(a.*lambda+ny.*R).*sin(theta).*cos(theta)+(a.*cos(theta)-R).* ...
    sin(phi).*my));

% domikron_dt
dx_dt(5) = (-k.*(g+a.*cos(theta).*my.^2+a.*sin(theta).*dx_dt(1)).* ...
    (omikron+(a.*lambda+ny.*R).*sin(theta).*cos(phi)+(R-a.*cos(theta)).*...
     phi.*my));

% dtheta_dt
dx_dt(6) = my;
 
 % dphi_dt
dx_dt(7) = lambda;

% dpsi_dt
dx_dt(8) = ny;

% dxc_dt
dx_dt(9) = xi;

% dyc_dt 
dx_dt(10) = omikron;

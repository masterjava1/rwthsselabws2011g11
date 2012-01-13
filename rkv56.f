com   =================================================================
com   23.12.2011
com  
com   Alexander Fischer
com   alexander.fischer@rwth-aachen.de
com
com
com
com   =================================================================
com
      module RUNGEKUTTA
      use RIGHTSIDE
      implicit none 
      contains
com   =================================================================
com   Runge-Kutta 56 solver with adaptable stepping
com   customized to solve the "TippeTop" ODE-system
com   =================================================================
      subroutine rkv56(wi, ti, it, t0, x0, tf, parms)
com   Precision
      integer, parameter :: prec = selected_real_kind(8,248)
com   Dummy arguments
      integer, intent(inout) :: it
      real(kind=prec) :: t0, tf
      real(kind=prec), dimension(10) :: x0
      real(kind=prec), dimension(3) :: parms
      real(kind=prec), dimension(:), allocatable, intent(inout) 
     & :: ti
      real(kind=prec), dimension(:,:), allocatable, intent(inout)
     & :: wi
com   Parameter
      real(kind=prec), parameter :: gtol = 1E-6
      real(kind=prec), parameter :: R = 25E-3
      real(kind=prec), parameter :: m = 15E-3
      real(kind=prec), parameter :: I = 0.4*m*R**2
      real(kind=prec), parameter :: I3 = 0.4*m*R**2
      real(kind=prec), parameter :: a = 5E-3
com   Variables
      integer :: neqn, counter, msteps, k, j
      logical :: minreached
      real(kind=prec) ::  
     &lambda, theta, Rk, ny, G, Gc, hmin, hmax, TOL, h, q
      real(kind=prec), dimension(10) :: k1, k2, k3, k4, k5, k6,
     &k7, k8, xt, dx_dt
com   Dynamic variables
      real(kind=prec), dimension(:), allocatable :: Gp
com   
      neqn = 10
      hmin = parms(1)
      hmax = parms(2)
      TOL = parms(3)
      counter = 0
      h = hmax
      it = 2
      minreached = .FALSE.
com   Compute memory and allocate arrays
      msteps = INT((tf-t0)/(hmin*3))
      allocate(ti(msteps+1))
      allocate(Gp(msteps+1))
      allocate(wi(10,msteps+1))
      ti = (/ (0,k=1,msteps+1) /)
      Gp = (/ (0,k=1,msteps+1) /)
      do j=1,10
         do k=1,msteps+1
            wi(j,k) = 0
         end do
      end do
com
      ti(1) = t0
      wi(:, 1) = x0
com   Conserved quantity
      lambda = x0(2)
      theta = x0(6)
      ny = x0(3)
      Gc = I*R*lambda*sin(theta)**2+I3*(R*cos(theta)-a)*(lambda*
     &cos(theta)+ny) 
com
      do while (t0 .LT. tf)
         call RHS(dx_dt, t0, x0) 
         k1 = h*dx_dt
         call RHS(dx_dt, t0+h/6, x0+k1/6) 
         k2 = h*dx_dt
         call RHS(dx_dt, t0+4*h/15, x0+4*k1/75+16*k2/75)
         k3 = h*dx_dt
         call RHS(dx_dt, t0+2*h/3, x0+5*k1/6-8*k2/3+5*k3/2)
         k4 = h*dx_dt
         call RHS(dx_dt, t0+5*h/6, x0-165*k1/64+55*k2/6-425*k3/64+
     &   85*k4/96)
         k5 = h*dx_dt
         call RHS(dx_dt, t0+h, x0+12*k1/5-8*k2+4015*k3/612-11*
     &   k4/36+88*k5/255)
         k6 = h*dx_dt
         call RHS(dx_dt, t0+h/15, x0-8263*k1/15000+124*k2/75-643*k3/680-
     &   81*k4/250+2484*k5/10625)
         k7 = h*dx_dt
         call RHS(dx_dt, t0+h, x0+3501*k1/1720-300*k2/43+297275*k3/
     &   52632-319*k4/2322+24068*k5/84065+3850*k7/26703) 
         k8 = h*dx_dt
com
         Rk = maxval(abs(k1/160+125*k3/17952-k4/144+12*k5/1955+3*k6/44-
     &   125*k7/11592-43*k8/616)/h)
         q = 0.87*(TOL/Rk)**(1/5)
         counter = counter + 8
com   Conserved quantity
         xt = x0+3*k1/40+875*k3/2244+23*k4/72+264*k5/1955+125*k7/11592+
     &   43*k8/616
         lambda = xt(2)
         theta = xt(6)
         ny = xt(3)
com
         G = I*R*lambda*sin(theta)**2+I3*(R*cos(theta)-a)*(lambda*
     &   cos(theta)+ny)
com
         if (((Rk.LT.TOL).AND.((abs(abs(G)-abs(Gc))/h).LT.gtol))
     &   .OR.minreached) then
            Gp(it-1) = abs(abs(G)-abs(Gc))/h
            Gc = G
            x0 = xt
            t0 = t0+h
            wi(1:neqn, it) = x0
            ti(it) = t0
            it =  it + 1
            minreached = .FALSE.
            h = hmax
         end if
         h = min(max(q,0.1),4.0)*h
         if (h.GT.hmax) then 
            h=hmax 
         endif
com
         if (t0+h.GT.tf) then
            h = tf-t0
         elseif (h.LT.hmin) then
            h = hmin
            minreached = .TRUE.
         endif
      end do      
com
      end subroutine rkv56
      end module RUNGEKUTTA

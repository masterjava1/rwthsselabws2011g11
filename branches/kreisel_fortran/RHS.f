com   =================================================================
com   23.12.2011
com  
com   Alexander Fischer
com   alexander.fischer@rwth-aachen.de
com
com   Input:
com   t, x
com
com   Output:
com   dx_dt
com
com   =================================================================
com
      module RIGHTSIDE
      implicit none
      contains
      subroutine RHS(dx_dt, t, x)
com   Precision
      integer, parameter :: prec = selected_real_kind(8,248)
com   Dummy arguments
      real(kind=prec) :: t 
      real(kind=prec), dimension(10) :: x 
      real(kind=prec), dimension(10) :: dx_dt 
com   Parameter
      real(kind=prec), parameter :: g = 9.81 
      real(kind=prec), parameter :: R = 25E-3
      real(kind=prec), parameter :: k = 0.3E2
com      real(kind=prec), parameter :: k = 0
      real(kind=prec), parameter :: m = 15E-3
      real(kind=prec), parameter :: I = 0.4*m*R*R
      real(kind=prec), parameter :: I3 = 0.4*m*R*R
      real(kind=prec), parameter :: a = 5E-3
com   Variables
      real(kind=prec) :: my, lambda, ny, xi, omikron, theta,
     &                          phi, psi, xc, yc
com   
      my = x(1)
      if (IsNaN(x(1))) stop '"x(1)" is NaN'
      lambda = x(2)
      if (IsNaN(x(2))) stop '"x(2)" is NaN'
      ny = x(3)
      if (IsNaN(x(3))) stop '"x(3)" is NaN'
      xi = x(4)
      if (IsNaN(x(4))) stop '"x(4)" is NaN'
      omikron = x(5)
      if (IsNaN(x(5))) stop '"x(5)" is NaN'
      theta = x(6)
      if (IsNaN(x(6))) stop '"x(6)" is NaN'
      phi = x(7)
      if (IsNaN(x(7))) stop '"x(7)" is NaN'
      psi = x(8)
      if (IsNaN(x(8))) stop '"x(8)" is NaN'
      xc = x(9)
      if (IsNaN(x(9))) stop '"x(9)" is NaN'
      yc = x(10) 
      if (IsNaN(x(10))) stop '"x(10)" is NaN'
com
com   dmy_dt
      dx_dt(1) = (-(I3-I)*lambda**2*sin(theta)*cos(theta)-I3*lambda*
     &sin(theta)*ny+(g+a*my**2*cos(theta))*(-m*a*sin(theta)-k*
     &m*(R-a*cos(theta))*(-xi*sin(phi)+omikron*cos(phi)+
     &(R-a*cos(theta))*my)))/(I+m*a**2*sin(theta)**2+k*m*a*
     &sin(theta)*(R-a*cos(theta))*(-xi*sin(phi)+omikron*cos(phi)+
     &(R-a*cos(theta))*my))
      if (IsNaN(dx_dt(1))) write(*,*) x 
      if (IsNaN(dx_dt(1))) stop '"dx_dt(1)" is NaN'
com
com   dlambda_dt
      dx_dt(2) = (-(2*I-I3)*lambda*my*cos(theta)+I3*my*ny-k*m*
     &(g+a*cos(theta)*my**2+a*sin(theta)*dx_dt(1))*
     &(a-R*cos(theta))*(xi*cos(phi)+omikron*sin(phi)+(a*lambda+ny*
     &R)*sin(theta)))/(I*sin(theta))
      if (IsNaN(dx_dt(2))) stop '"dx_dt(2)" is NaN'
com
com   dny_dt
      dx_dt(3) = (-I3*(dx_dt(2)*cos(theta)-lambda*my*sin(theta))-k*m*
     &(g+a*cos(theta)*my**2+a*sin(theta)*dx_dt(1))*
     &(R*sin(theta))*(xi*cos(phi)+omikron*sin(phi)+(a*lambda+ny*R)*
     &sin(theta)))/I3
      if (IsNaN(dx_dt(3))) stop '"dx_dt(3)" is NaN'
com   
com   dxi_dt
      dx_dt(4) = (-k*(g+a*cos(theta)*my**2+a*sin(theta)*dx_dt(1))*
     &(xi+(a*lambda+ny*R)*sin(theta)*cos(phi)+(a*cos(theta)-R)*
     &sin(phi)*my))
      if (IsNaN(dx_dt(4))) stop '"dx_dt(4)" is NaN'
com
com   domikron_dt 
      dx_dt(5) = (-k*(g+a*cos(theta)*my**2+a*sin(theta)*dx_dt(1))*
     &(omikron+(a*lambda+ny*R)*sin(theta)*sin(phi)+(R-a*cos(theta))*
     &cos(phi)*my))
      if (IsNaN(dx_dt(5))) stop '"dx_dt(5)" is NaN'
com  
com   dtheta_dt
      dx_dt(6) = my
      if (IsNaN(dx_dt(6))) stop '"dx_dt(6)" is NaN'
com  
com   dphi_dt
      dx_dt(7) = lambda
      if (IsNaN(dx_dt(7))) stop '"dx_dt(7)" is NaN'
com  
com   dpsi_dt
      dx_dt(8) = ny
      if (IsNaN(dx_dt(8))) stop '"dx_dt(8)" is NaN'
com
com   dxc_dt
      dx_dt(9) = xi
      if (IsNaN(dx_dt(9))) stop '"dx_dt(9)" is NaN'
com
com   dyc_dt
      dx_dt(10) = omikron 
      if (IsNaN(dx_dt(10))) stop '"dx_dt(10)" is NaN'
com
      end subroutine RHS
      end module RIGHTSIDE

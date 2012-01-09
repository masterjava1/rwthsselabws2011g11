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
com   Dummy arguments
      real(kind=kind(1.0d0)) :: t 
      real(kind=kind(1.0d0)), dimension(10) :: x 
      real(kind=kind(1.0d0)), dimension(10) :: dx_dt 
com   Parameter
      real(kind=kind(1.0d0)), parameter :: g = 9.81 
      real(kind=kind(1.0d0)), parameter :: R = 25E-3
      real(kind=kind(1.0d0)), parameter :: k = 0.3E2
      real(kind=kind(1.0d0)), parameter :: m = 15E-3
      real(kind=kind(1.0d0)), parameter :: I = 0.4*m*R*R
      real(kind=kind(1.0d0)), parameter :: I3 = 0.4*m*R*R
      real(kind=kind(1.0d0)), parameter :: a = 5E-3
com   Variables
      real(kind=kind(1.0d0)) :: my, lambda, ny, xi, omikron, theta,
     &                          phi, psi, xc, yc
com   
      my = x(1)
      lambda = x(2)
      ny = x(3)
      xi = x(4)
      omikron = x(5)
      theta = x(6)
      phi = x(7)
      psi = x(8)
      xc = x(9)
      yc = x(10) 
com   dmy_dt
      dx_dt(1) = (-(I3-I)*lambda**2*sin(theta)*cos(theta)-I3*lambda*
     &sin(theta)*ny+(g+a*my**2*cos(theta))*(-m*a*sin(theta)-k*
     &m*(R-a*cos(theta))*(-xi*sin(phi)+omikron*cos(phi)-
     &(R-a*cos(theta))*my)))/(I+m*a**2*sin(theta)**2+k*m*a*
     &sin(theta)*(R-a*cos(theta))*(-xi*sin(phi)+omikron*cos(phi)-
     &(R-a*cos(theta))*my))
com
com   dlambda_dt
      dx_dt(2) = (-(2*I-I3)*lambda*my*cos(theta)+I3*my*ny-k*m*
     &(g+a*cos(theta)*my**2+a*sin(theta)*dx_dt(1))*
     &(a-R*cos(theta))*(xi*cos(phi)+omikron*sin(phi)+(a*lambda+ny*
     &R)*sin(theta)))/(I*sin(theta))
com
com   dny_dt
      dx_dt(3) = (-I3*(dx_dt(2)*cos(theta)-lambda*my*sin(theta))-k*m*
     &(g+a*cos(theta)*my**2+a*sin(theta)*dx_dt(1))*
     &(R*sin(theta))*(xi*cos(phi)+omikron*sin(phi)+(a*lambda+ny*R)*
     &sin(theta)))/I3
com   
com   dxi_dt
      dx_dt(4) = (-k*(g+a*cos(theta)*my**2+a*sin(theta)*dx_dt(1))*
     &(xi+(a*lambda+ny*R)*sin(theta)*cos(phi)+(a*cos(theta)-R)*
     &sin(phi)*my))
com
com   domikron_dt 
      dx_dt(5) = (-k*(g+a*cos(theta)*my**2+a*sin(theta)*dx_dt(1))*
     &(omikron+(a*lambda+ny*R)*sin(theta)*cos(phi)+(R-a*cos(theta))*
     &cos(phi)*my))
com  
com   dtheta_dt
      dx_dt(6) = my
com
com   dphi_dt
      dx_dt(7) = lambda
com
com   dpsi_dt
      dx_dt(8) = ny
com
com   dxc_dt
      dx_dt(8) = xi
com
com   dyc_dt
      dx_dt(8) = omikron 
com
      end subroutine RHS
      end module RIGHTSIDE

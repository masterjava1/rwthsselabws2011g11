      program test
      use RIGHTSIDE
      implicit none
      integer :: j
      real(kind=kind(1.0d0)), dimension(10) :: dx_dt
      real(kind=kind(1.0d0)) :: t0
      real(kind=kind(1.0d0)) :: h0
      real(kind=kind(1.0d0)), dimension(10) :: x0
      t0 = 0.3
      x0 = (/ 0.1, 0.1, 250.0, 0.1, 0.1, 0.2, 0.1, 0.1, 0.1, 0.1 /)
      call RHS(dx_dt, t0, x0)
      do j=1,10
         write(*,*) dx_dt(j)
      end do
      h0=0.00003
      write(*,*) sin(h0)
      end program test

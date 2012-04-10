      program test
      use RIGHTSIDE
      implicit none
com   Precision
      integer, parameter :: prec = selected_real_kind(8,248)
com
      integer :: i,j
      real(kind=prec), dimension(10) :: dx_dt
      real(kind=prec) :: t0
      real(kind=prec), dimension(10) :: x0
      t0 = 0.1
      x0 = (/ 0.1, 0.1, 250.0, 0.1, 0.1, 0.2, 0.1, 0.1, 0.1, 0.1 /)
      open(unit=7, file='RHS_m.dat', status='unknown')
      do i=1,1000
         do j=1,10
            x0(j) = x0(j)*1.01
         end do
         t0 = t0*1.01
         call RHS(dx_dt, t0, x0)
         write(unit=7,fmt="(11(E38.30))") t0, dx_dt(:)
      end do
      close(7)
      end program test

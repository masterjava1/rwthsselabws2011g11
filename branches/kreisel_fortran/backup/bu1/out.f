      module OUTPUT 
      implicit none
      contains
com
      subroutine kreiselplot(ti, wi)
com   Dummy variables
      real(kind=kind(1.0d0)), dimension(:,:), pointer :: wi
      real(kind=kind(1.0d0)), dimension(:), pointer :: ti
com   Variables
      integer :: i,nc
com
      nc = size(ti)
      open(unit=7, file='kreisel.dat', status='unknown')
      do i=1,nc
         write(7,*) ti(i)
      end do
      do i=1,nc
         write(7,*) wi(1:10,i)
      end do
      close(7)
      end subroutine kreiselplot
com
      end module OUTPUT

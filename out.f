      module OUTPUT 
      implicit none
      contains
com
      subroutine kreiselplot(ti, wi, it)
com   Dummy variables
      integer, intent(inout) :: it
      real(kind=kind(1.0d0)), dimension(:,:), allocatable, intent(in) ::
     & wi
      real(kind=kind(1.0d0)), dimension(:), allocatable, intent(in) :: 
     & ti
com   Variables
      integer :: i,nc
com
      nc = it 
      open(unit=7, file='kreisel.dat', status='unknown')
      do i=1,nc
         write(7,*) ti(i)
      end do
      do i=1,nc
         write(7,*) wi(3,i)
      end do
      close(7)
      end subroutine kreiselplot
com
      end module OUTPUT

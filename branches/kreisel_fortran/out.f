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
      write(7,*) 'TITLE     = "Simulation Stehaufkreisel"'
      write(7,*) 'VARIABLES = "t"'
      write(7,*) '"my"'
      write(7,*) '"lambda"'
      write(7,*) '"ny"'
      write(7,*) '"xi"'
      write(7,*) '"omikron"'
      write(7,*) '"theta"'
      write(7,*) '"phi"'
      write(7,*) '"psi"'
      write(7,*) '"xc"'
      write(7,*) '"yc"'
      write(7,*) 'ZONE T="ZONE 001"'
      write(7,*) 'STRANDID=0, SOLUTIONTIME=0'
      write(7,*) 'I=2645, J=1, K=1, ZONETYPE=Ordered'
      write(7,*) 'DATAPACKING=POINT'
      write(7,*) 'DT=(SINGLE SINGLE SINGLE SINGLE SINGLE SINGLE '// 
     & 'SINGLE SINGLE SINGLE SINGLE SINGLE )'
      do i=1,nc
         write(unit=7,fmt="(11(E28.20))") ti(i), wi(:,i)
      end do
      close(7)
      
      end subroutine kreiselplot
com
      end module OUTPUT

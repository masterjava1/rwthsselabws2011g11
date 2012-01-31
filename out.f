      module OUTPUT 
      implicit none
      contains
com
      subroutine gyroplot(ti, wi, it)
com   Precision
      integer, parameter :: prec = selected_real_kind(8,248)
      integer, parameter :: iprec = selected_real_kind(8)
com   Dummy variables
      integer(kind=iprec), intent(inout) :: it
      real(kind=prec), dimension(:,:), pointer, intent(in) ::
     & wi
      real(kind=prec), dimension(:), pointer, intent(in) :: 
     & ti
com   Variables
      integer(kind=iprec) :: i,nc
com
      write(*,*) "Writing solution to gyro.dat in tecplot format"
com   Format
 30   format('I=',I9,1X,', J=1, K=1, ZONETYPE=Ordered')   
      nc = it 
      open(unit=7, file='gyro.dat', status='unknown')
      write(7,*) 'TITLE     = "Simulation tippe-top gyro"'
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
      write(7,30) nc
      write(7,*) 'DATAPACKING=POINT'
      write(7,*) 'DT=(SINGLE SINGLE SINGLE SINGLE SINGLE SINGLE '// 
     & 'SINGLE SINGLE SINGLE SINGLE SINGLE )'
      do i=1,nc
         write(unit=7,fmt="(11(E28.20))") ti(i), wi(:,i)
      end do
      close(7)
com
      write(*,*) "gyro.dat written"
com
      end subroutine gyroplot
com
      end module OUTPUT

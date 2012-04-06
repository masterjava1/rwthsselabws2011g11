      program kreisel
      use RUNGEKUTTA
      use OUTPUT
      use PRECMOD 
      implicit none
com
      integer(kind=iprec) :: it,i
      real(kind=prec), dimension(10) :: x0
      real(kind=prec), dimension(:,:), pointer :: wi
      real(kind=prec), dimension(:), pointer :: ti
      real(kind=prec), dimension(3) :: parms
      real(kind=prec) :: t0, tf
com
      x0 = (/ 0.0, 0.0, 250.0, 0.0, 0.0, 0.1, 0.0, 0.0, 0.0, 0.0 /)
      t0 = 0
com      tf = 0.23
      tf = 2.75 
      parms = (/1E-8, 1E-6, 1E-4 /)
      write(*,*) "Simulation of the TippeTop gyro" 
      call rkv56(wi, ti, it, t0, x0, tf, parms)
      write(*,*) "Steps:"
      write(*,"(I9)") it
      it = it-1
com      call kreiselplot(ti, wi, it)
com   DEBUG ->
com   write matlab data file
      open(unit=7, file='gyro_m.dat', status='unknown')
      do i=1,(it/1000)
         write(unit=7,fmt="(11(E28.20))") ti(i*1000), wi(3,i*1000)
      end do
      close(7)
com   <- DEBUG
      write(*,*) "Done" 
      end program

      program kreisel
      use RUNGEKUTTA
      use OUTPUT
      use PRECMOD 
      implicit none
com
      integer(kind=iprec) :: it
      real(kind=prec), dimension(10) :: x0
      real(kind=prec), dimension(:,:), pointer :: wi
      real(kind=prec), dimension(:), pointer :: ti
      real(kind=prec), dimension(3) :: parms
      real(kind=prec) :: t0, tf
com
      x0 = (/ 0.0, 0.0, 250.0, 0.0, 0.0, 0.1, 0.0, 0.0, 0.0, 0.0 /)
      t0 = 0
      tf = 0.23 
      parms = (/1E-8, 1E-6, 1E-4 /)
      write(*,*) "Simulation of the TippeTop gyro" 
      call rkv56(wi, ti, it, t0, x0, tf, parms)
      it = it-1
      call kreiselplot(ti, wi, it)
      write(*,*) "Done" 
      end program

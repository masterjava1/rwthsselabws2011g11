      program kreisel
      use RUNGEKUTTA
      use OUTPUT 
      implicit none
      integer :: it
      real(kind=kind(1.0d0)), dimension(10) :: x0
      real(kind=kind(1.0d0)), dimension(:,:), allocatable :: wi
      real(kind=kind(1.0d0)), dimension(:), allocatable :: ti
      real(kind=kind(1.0d0)), dimension(3) :: parms
      real(kind=kind(1.0d0)) :: t0, tf
com
      x0 = (/ 0.0, 0.0, 250.0, 0.0, 0.0, 0.1, 0.0, 0.0, 0.0, 0.0 /)
      t0 = 0
      tf = 0.02
      parms = (/1E-6, 1E-2, 1E-4 /)
      write(*,*) "Calculating ..." 
      call rkv56(wi, ti, it, t0, x0, tf, parms)
      write(*,*) "Writing output ..." 
      call kreiselplot(ti, wi, it)
      end program

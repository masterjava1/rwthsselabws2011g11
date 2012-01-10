      program kreisel
      use RUNGEKUTTA
      use OUTPUT 
      implicit none
com   Precision
      integer, parameter :: prec = selected_real_kind(8,248)
com
      integer :: it
      real(kind=prec), dimension(10) :: x0
      real(kind=prec), dimension(:,:), allocatable :: wi
      real(kind=prec), dimension(:), allocatable :: ti
      real(kind=prec), dimension(3) :: parms
      real(kind=prec) :: t0, tf
com
      x0 = (/ 0.0, 0.0, 250.0, 0.0, 0.0, 0.1, 0.0, 0.0, 0.0, 0.0 /)
      t0 = 0
      tf = 0.05
      parms = (/1E-8, 1E-4, 1E-6 /)
      write(*,*) "Calculating ..." 
      call rkv56(wi, ti, it, t0, x0, tf, parms)
      write(*,*) "Writing output ..." 
      call kreiselplot(ti, wi, it)
      end program

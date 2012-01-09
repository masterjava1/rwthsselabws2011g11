      program kreisel
      use RUNGEKUTTA
      use OUTPUT 
      implicit none
      real(kind=kind(1.0d0)), dimension(10) :: x0
      real(kind=kind(1.0d0)), dimension(:,:), pointer :: wi
      real(kind=kind(1.0d0)), dimension(:), pointer :: ti
      real(kind=kind(1.0d0)), dimension(3) :: parms
      real(kind=kind(1.0d0)) :: t0, tf
com
      x0 = (/ 0.0, 0.0, 250.0, 0.0, 0.0, 0.1, 0.0, 0.0, 0.0, 0.0 /)
      t0 = 0
      tf = 0.02 
      parms = (/1E-6, 1E-2, 1E-4 /)
      call rkv56(wi, ti, t0, x0, tf, parms)
      write(*,*) size(wi) 
      end program

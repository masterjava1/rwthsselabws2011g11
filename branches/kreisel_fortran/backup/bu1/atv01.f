com   =================================================================
com   23.12.2011
com  
com   Alexander Fischer
com   alexander.fischer@rwth-aachen.de
com
com   Toolbox for array operation, manipulation and allocation
com   All subroutines work with double precision real objects
com
com   + subroutine ias(dp_array)
com       reallocates the input array (+1; persistent data)
com
com   =================================================================
com
      module ATV01
      implicit none
      contains
      subroutine ias(dp_array)
com   Dummy variable
      real(kind=kind(1.0d0)), dimension(:), pointer :: dp_array
com   Variables
      integer :: cs
      real(kind=kind(1.0d0)), dimension(:), pointer :: datmp 
com
      cs = size(dp_array)
      allocate(datmp(cs+1))
      datmp(1:cs) = dp_array(1:cs)
      deallocate(dp_array)
      datmp(cs+1) = 0
      dp_array=>datmp
com
      end subroutine ias
com
com   Extend 10,i to 10,i+1
      subroutine iasc(dp_array)
com   Dummy variable
      real(kind=kind(1.0d0)), dimension(:,:), pointer :: dp_array
com   Variables
      integer :: cs, i
      real(kind=kind(1.0d0)), dimension(:,:), pointer :: datmp 
com
      cs = size(dp_array,2)
      allocate(datmp(10,cs+1))
      datmp(:,1:cs) = dp_array(:,1:cs)
      deallocate(dp_array)
      datmp(1:10,cs+1) = (/ (0,i=1,10) /)
      dp_array => datmp
com
      end subroutine iasc
      end module ATV01

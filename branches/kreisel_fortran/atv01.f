com   =================================================================
com   23.12.2011
com  
com   Alexander Fischer
com   alexander.fischer@rwth-aachen.de
com
com   Toolbox for array operation, manipulation and allocation
com
com   + subroutine ias(dp_array, used)
com       reallocates the input array (+asteps; persistent data)
com
com   + subroutine iasc(dp_array, used)
com       reallocates the input array (+asteps; persistent data)
com   =================================================================
com
      module ATV01
      use PRECMOD
      implicit none
com   Allocation steps
      integer, parameter :: asteps = 204800
      contains
      subroutine ias(dp_array, used)
com   Precision
com   Dummy variable
      real(kind=prec), dimension(:), pointer :: dp_array
      integer(kind=iprec), intent(in) :: used 
com   Variables
      integer :: cs
      real(kind=prec), dimension(:), pointer :: datmp 
com
      cs = size(dp_array)
      if(used.GT.size(dp_array)) stop "ATV01:ias used > size" 
      if(used.EQ.size(dp_array)) then
      allocate(datmp(cs+asteps))
      datmp(1:cs) = dp_array(1:cs)
      deallocate(dp_array)
      datmp(cs+1:cs+asteps) = 0
      dp_array=>datmp
      end if
      end subroutine ias
com
com
com   Extend 10,i to 10,i+1
      subroutine iasc(dp_array, used)
com   Dummy variable
      real(kind=prec), dimension(:,:), pointer :: dp_array
      integer(kind=iprec), intent(in) :: used 
com   Variables
      integer :: cs
      real(kind=prec), dimension(:,:), pointer :: datmp 
com
      cs = size(dp_array,2)
      if(used.GT.size(dp_array,2)) stop "ATV01:iasc used > size" 
      if(used.EQ.size(dp_array,2)) then
      allocate(datmp(10,cs+asteps))
      datmp(:,1:cs) = dp_array(:,1:cs)
      deallocate(dp_array)
      datmp(1:10,cs+1:cs+asteps) = 0
      dp_array => datmp
      end if
      end subroutine iasc
com
com
      end module ATV01

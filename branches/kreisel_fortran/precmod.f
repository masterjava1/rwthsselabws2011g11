      module PRECMOD
      implicit none
com   Precision
      integer, parameter :: prec = selected_real_kind(8,248)
      integer, parameter :: iprec = selected_real_kind(8)
      end module PRECMOD

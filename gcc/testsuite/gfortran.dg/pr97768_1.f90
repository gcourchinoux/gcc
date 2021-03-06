! PR fortran/97768
! { dg-do compile }

module pr97768_1
  interface operator(.in.)
    module procedure substr_in_str
  end interface
contains
  pure function to_upper (in_str) result (string)
    character(len=*), intent(in) :: in_str
    character(len=len(in_str)) :: string
    string = in_str
  end function to_upper
  logical pure function substr_in_str (substring, string)
    character(len=*), intent(in) :: string, substring
    substr_in_str=.false.
  end function
end module
function foo ()
  use pr97768_1, only : to_upper, operator(.in.)
  logical :: foo
  character(len=8) :: str
  str = 'abcde'
  foo = 'b' .in. to_upper (str)
end function foo

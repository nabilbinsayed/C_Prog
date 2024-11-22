// Name: 
// Date: 
// Course/book: 
// Section: 
// Purpose: 
    // Write calls of printf that display a float variable x in the following formats.
    // (a) Exponential notation; left-justified in a field of size 8; one digit after the decimal point.
    // (b) Exponential notation; right-justified in a field of size 10; six digits after the decimal
    // point.
    // (c) Fixed decimal notation; left-justified in a field of size 8; three digits after the decimal
    // point.
    // (d) Fixed decimal notation; right-justified in a field of size 6; no digits after the decimal
    // point

// Note/Highlight: 

#include <stdio.h>
int main (void)

{
  float x = 3.1416;

  printf("X%-8.1eX\n", x);
  // output guess: "3.1e+00 "
  // real output : "3.1e+00 "

  printf("X%10.6eX\n", x);
  // output guess: ""
  // real output : "3.141600e+00"
  
  printf("X%-8.3fX\n", x);
  // output guess: 
  // real output: 
  
  printf("X%6.0fX\n", x);
  // output guess: 
  // real output: 
  


  return 0; 
}
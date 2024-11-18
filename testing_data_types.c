// Name: 
// Date: 17.11.24
// Course/book: Kn King
// Section: 3.1
// Purpose: To test different data types and related conversion specifications

// Note/Highlight: compilers aren’t required to check that a conversion specification is appropriate for the type of item being printed. If the programmer uses an incorrect specification, the program will simply produce meaningless output. 

// C compilers aren’t required to check that the number of conversion specifications in a format string matches the number of output items.


#include <stdio.h>
int main (void)

{
  int a; float x; // "int a, float x;" doesn't work: it has to be a ";" in between, not a comma
  a=10, x=10.5;

  printf("%d %f", x, a); // the order is wrong but still compiler won't flag it, because it won't check it at all. The output will be there but it will be meaningless. 

  return 0; 
}
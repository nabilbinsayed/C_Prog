// Name: 
// Date: 
// Course/book: Kn king 
// Section: 3.1
// Purpose: general form of conversion specifications aka format specifier

// Note/Highlight: More generally, a conversion specification can have the form %m.pX or %-m.pX, where m and p are integer constants and X is a letter.
// Both m and p are optional; if p is omitted, the period that separates m and p is also
// dropped. In the conversion specification %10.2f, m is 10, p is 2, and X is f. In
// the specification %10f, m is 10 and p (along with the period) is missing, but in the
// specification %.2f, p is 2 and m is missing.
// The minimum field width, m, specifies the minimum number of characters to print. If the value to be printed requires fewer than m characters, the value is right justified within the field. (In other words, extra spaces precede the value.) For example, the specification %4d would display the number 123 as •123. 
//(In this chapter, I’ll use • to represent the space character.) 

// If the value to be printed requires more than m characters, the field width automatically expands to the necessary size. Thus, the specification %4d would display the number 12345 as 12345—no digits are lost. 
// Putting a minus sign in front of m causes left justification; the specification %-4d would display 123 as 123•.


#include <stdio.h>
int main (void)

{

  int a=10;
  printf("%.3d", a); // in %m.pd: p indicates the minimum number of digits to display (extra zeros are added to the beginning of the number if necessary); if p is omitted, it is assumed to have the value 1. (In other words, %d is the same as %.1d.)

  // it prints 010
 

  return 0; 
}
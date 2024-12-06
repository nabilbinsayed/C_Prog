// Name:
// Date:
// Course/book:
// Section:
// Purpose:
// Note/Highlight: e — Displays a floating-point number in exponential format (scientific notation). p indicates how many digits should appear after the decimal point (the default is 6). If p is 0, the decimal point is not displayed

#include <stdio.h>
int main(void)

{
  float atm = 101325;

  printf("%e\n", atm);   // prints 1.013250e+05
  printf("%.3e\n", atm); // prints 1.013e+05

  // p indicates how many digits should appear after the decimal point (the default is 6). If p is 0, the decimal point is not displayed

  printf("%.0e\n", atm); // prints 1e+05

  return 0;
}
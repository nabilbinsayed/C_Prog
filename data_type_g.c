// Name: 
// Date: 
// Course/book: 
// Section: 
// Purpose: 
// Note/Highlight: g — Displays a floating-point number in either exponential format or fixed
// decimal format, depending on the number’s size. p indicates the maximum
// number of significant digits (not digits after the decimal point) to be displayed. Unlike the f conversion, the g conversion won’t show trailing zeros.
// Furthermore, if the value to be printed has no digits after the decimal point, g  doesn’t display the decimal point.

// The g specifier is especially useful for displaying numbers whose size can’t be predicted when the program is written or that tend to vary widely in size. When used to print a moderately large or moderately small number, the g specifier uses fixed decimal format. But when used to print a very large or very small number, the g specifier switches to exponential format so that the number will require fewer characters.


#include <stdio.h>
int main (void)

{
  float atm=101325;
  float big=602214076;
  float five=5;

  printf("%g\n", atm); //101325
  printf("%g\n", big); //6.02214e+08
  printf("%g\n", five); //5
  printf("%f", five); // 5.000000
  

  return 0; 
}
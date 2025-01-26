#include <stdio.h>
int main()
{
  // find fractional part
  float f, frac_part;

  f = 3.1416;

  printf("fractional part of %f is %f\n", f, f - (int)f);

  return 0;
}
#include <stdio.h>

float abs_val(float a);

int main()
{
  float x, abs_x;
  printf("Enter a number: ");
  scanf("%f", &x);
  abs_x = abs_val(x);
  printf("|%g| = %g\n", x, abs_x);

  return 0;
}

float abs_val(float a)
{
  if (a < 0)
    return -1.0 * a;
  else
    return a;
}

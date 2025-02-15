#include <stdio.h>

double factorial(double num)
{
  double i, fact = 1;

  for (i = num; i > 0; i--) {
    fact = fact * i;
  }

  return fact;
}

int main(void)
{
  double n, r, nCr; 
  n = 20;
  r = 2;
  nCr = factorial(n) / (factorial(n - r) * factorial(r));

  printf("%.0lfC%.0lf is %.0lf\n", n, r, nCr);

  return 0;
}
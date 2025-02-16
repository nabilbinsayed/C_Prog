#include <stdio.h>

double average(double a, double b); // glimpse

int main()
{
  double x, y, z;
  printf("Enter three numbers, x, y and z: ");
  scanf("%lf %lf %lf", &x, &y, &z);

  printf("Average of %g and %g is %g\n", x, y, average(x, y));
  printf("Average of %g and %g is %g\n", z, y, average(z, y));
  printf("Average of %g and %g is %g\n", x, z, average(x, z));

  return 0;
}

double average(double a, double b)
{
  return (a + b) / 2;
}
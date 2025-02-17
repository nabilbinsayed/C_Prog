#include <stdio.h>
#include <stdlib.h>

double factorial(int n);

int main()
{
  int x;
  printf("Enter a non-negative integer: ");
  scanf("%d", &x);

  printf("%d! = %g\n", x, factorial(x));

  exit(0);
}
double factorial(int n)
{
  if (n <= 1) {
    return 1;
  }
  else {
    return n * factorial(n - 1);
  }
}

#include <stdio.h>
int main(void)
{
  double n, i, fact = 1;

  printf("Enter an integer: ");
  scanf("%lf", &n);

  for (i = n; i > 0; i--) {
    fact = fact * i;
  }
  printf("%g\n", fact);

  return 0;
}
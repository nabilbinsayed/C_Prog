#include <stdio.h>
int main(void)
{
  unsigned long long int n;
  int digits;

  digits = 0;

  printf("Enter a non-negative number: ");
  scanf("%llu", &n);

  if (n == 0) {
    printf("Number of digits: %d\n", 1);
  }

  else {
    while (n > 0) {
      n = n / 10;
      digits++;
    }

    printf("Number of digits: %d\n", digits);
  }

  return 0;
}
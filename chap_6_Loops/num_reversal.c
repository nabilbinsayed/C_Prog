#include <math.h>
#include <stdio.h>

int main()
{
  unsigned long long int n, m, k, rev = 0; // important
  int digits = 0;

  printf("Enter a non-negative integer: ");
  scanf("%llu", &n); // important
  k = m = n;             // stores the value of n

  do {
    n = n / 10;
    digits++;
  } while (n > 0);

  for (int i = digits - 1; i >= 0; i--, m /= 10) {
    rev += (m % 10) * pow(10, i);
  }

  printf("The number of digits in %llu is %d\n", k, digits); 
  printf("%llu reversed is %llu\n", k, rev);

  return 0;
}
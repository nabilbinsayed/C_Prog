#include <stdbool.h>
#include <stdio.h>

bool prime_check(long long n)
{
  long long i;

  if (n <= 1) {
    return false;
  }
  else {
    for (i = 2; i * i <= n; i++) {
      if (n % i == 0) {
        return false;
      }
    }
    return true;
  }
}

int main()
{
  long long x, count = 0;
  printf("Enter an integer: ");
  scanf("%lld", &x);

  for (long long i = 1; i <= x; i++) {
    if (prime_check(i)) {
      count++;
      // printf("%lld is PRIME......................................(%lld)\n", i, count);
    }
    else {
      // printf("%lld is NOT prime\n", i);
    }
  }
  printf("The number of primes till %lld is %lld\n", x, count);

  return 0;
}
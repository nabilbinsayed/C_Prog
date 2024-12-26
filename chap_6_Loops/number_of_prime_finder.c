#include <math.h>
#include <stdio.h>
int main(void)

{
  unsigned long long int m, n, i, root, prime_count = 0;

  printf("Enter an integer: ");
  scanf("%llu", &n);

  m = n; // store the value of primary input

  for (; n >= 1; n--) {
    root = sqrt(n);

    if (n == 1) {
      // printf("%llu is NOT PRIME\n", n);
    }
    else if (n == 2) {
      // printf("%llu is PRIME\n", n);
      prime_count++; // increment prime_count
    }

    else {
      for (i = root; i >= 1; i--) {
        if (n % i == 0)
          break;
      }

      if (i == 1) {
        // printf("%llu is PRIME\n", n);
        prime_count++; // increment prime_count
      }
      else {
        // printf("%llu is divisible by %llu\n", n, i);
      }
    }
  }

  printf("Number of prime from %llu to 1 is %llu\n", m, prime_count);

  return 0;
}
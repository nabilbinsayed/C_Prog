#include <math.h>
#include <stdio.h>
int main(void)

{
  unsigned long long int n, i, root;

  printf("Enter an integer: ");
  scanf("%llu", &n);

  root = sqrt(n);

  if (n == 1) {
    printf("%llu is NOT PRIME\n", n);
  }
  else if (n == 2) {
    printf("%llu is PRIME\n", n);
  }

  else {
    for (i = root; i >= 1; i--) {
      if (n % i == 0)
        goto done;
    }

    done: 
      if (i == 1) {
        printf("%llu is PRIME\n", n);
      }
      else {
        printf("%llu is divisible by %llu\n", n, i);
      }
  }

  return 0;
}
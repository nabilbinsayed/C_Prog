#include <math.h>
#include <stdbool.h>
#include <stdio.h>
int main(void)

{
  unsigned long long int n, i, root;
  bool flag = 0;

  do {
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
          break;
      }

      if (i == 1) {
        flag = true;
        printf("%llu is PRIME, end of program\n", n);
      }

      else {
        printf("%llu is divisible by %llu\n", n, i);
      }
    }
  } while (flag != true);

  return 0;
}
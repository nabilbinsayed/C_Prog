#include <stdbool.h>
#include <stdio.h>

bool prime_check(long long n);

int main()
{
  long long num;
  printf("enter an integer: ");
  scanf("%lld", &num);

  do {
    if (!prime_check(num)) {
      printf("is not super prime\n");
      return 0;
    }
    num /= 10;
  } while (num != 0);

  printf("is super prime\n");
}

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
// Name:
// Date:
// Course/book:
// Section:
// Purpose:
// Note/Highlight:

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
        break;
    }

    if (i == 1) {
      printf("%llu is PRIME\n", n);
    }
    else {
      printf("%llu is divisible by %llu\n", n, i);
    }
  }

  return 0;
}

// if (n == 2 || n == 3) {
//   printf("%d is prime\n", n);
// }
// else {
//   for (i = 2; i <= sqrt(n); i++) {
//     if (n % i == 0)
//       break;
//   }

//   if (i == sqrt(n)) {
//     printf("%d is prime\n", n);
//   }
//   else {
//     printf("%d is not prime\n", n);
//   }
// }
// Write a program that asks the user to enter two integers, then calculates and displays their
//  greatest common divisor (GCD):
//  Enter two integers: 12 28
//  Greatest common divisor: 4

#include <stdio.h>
int main()
{
  int a, b, m, n, i, j;

  printf("Enter two integers: ");
  scanf("%d %d", &a, &b);

  if (a == 0 || b == 0) {
    printf("Greatest Common Divisor: %d\n", a + b);
  }
  else {
    if (a == b) {
      printf("Greatest Common Divisor: %d\n", a);
    }

    else {
      if (a > b) {
        m = a, n = b;
      }
      else {
        m = b, n = a;
      }

      while (m % n != 0) {
        i = m, j = n;
        m = n;
        n = i % j;
      }

      printf("Greatest Common Divisor: %d\n", n);
    }
  }

  return 0;
}
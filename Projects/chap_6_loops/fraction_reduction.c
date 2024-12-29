// Write a program that asks the user to enter a fraction, then reduces the fraction to lowest
//  terms:
//  Enter a fraction: 6/12
//  In lowest terms: 1/2
//  Hint: To reduce a fraction to lowest terms, first compute the GCD of the numerator and
//  denominator. Then divide both the numerator and denominator by the GCD.

#include <stdio.h>
int main()
{
  int a, b, m, n, i, j, gcd;

  printf("Enter a fraction: ");
  scanf("%d/%d", &a, &b);

  if (b == 0) {
    printf("Invalid input\n");
  }
  else if (a == 0) {
    printf("In lowest terms: %d\n", 0);
  }
  else {
    if (a == b) {
      // printf("Greatest Common Divisor: %d\n", a);
      printf("In lowest terms: %d\n", 1);
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
      gcd = n;
      // printf("Greatest Common Divisor: %d\n", n);
    printf("In lowest terms: %d/%d\n", a/gcd, b/gcd);

    }
  }
}
// Write a program that asks the user to enter two integers, then calculates and displays their
//  greatest common divisor (GCD):
//  Enter two integers: 12 28
//  Greatest common divisor: 4

#include <stdio.h>
int main()
{
  int a, b, i, j;

  printf("Enter two integers: ");
  scanf("%d %d", &a, &b);

  if(a==0 && b==0) {
    printf("No GCD\n"); 
  }

  else if (a == 0 || b == 0) {
    printf("Greatest Common Divisor: %d\n", a + b);
  }
  else {
    if (a == b) {
      printf("Greatest Common Divisor: %d\n", a);
    }

    else {

      while (a % b != 0) {
        i = a, j = b;
        a = b;
        b = i % j;
      }

      printf("Greatest Common Divisor: %d\n", b);
    }
  }

  return 0;
}
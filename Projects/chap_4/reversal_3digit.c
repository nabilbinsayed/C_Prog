// Name:
// Date:
// Course/book:
// Section:
// Purpose: Write a program that asks the user to enter a three-digit number, then prints the number with its digits reversed.

// Note/Highlight:

#include <stdio.h>
int main(void)

{
  int in, d1, d2, d3;

  printf("Enter a three digit number: ");
  scanf("%d", &in);

  d3 = in % 10;
  d2 = (in / 10) % 10;
  d1 = in / 100;

  printf("%d reversed is %d%d%d\n", in, d3, d2, d1);

  // printf("%d\n", d1);
  // printf("%d\n", d2);
  // printf("%d\n", d3);

  return 0;
}
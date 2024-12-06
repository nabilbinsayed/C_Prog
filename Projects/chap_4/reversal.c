// Name:
// Date: 29/11/24
// Course/book:
// Section:
// Purpose:

// Write a program that asks the user to enter a two-digit number, then prints the number with
// its digits reversed. A session with the program should have the following appearance:
// Enter a two-digit number: 28
// The reversal is: 82
// Read the number using %d, then break it into two digits. Hint: If n is an integer, then n % 10
// is the last digit in n and n / 10 is n with the last digit removed.

// Note/Highlight:

#include <stdio.h>
int main(void)

{
  int in, d1, d2;

  printf("Enter a two-digit number: ");
  scanf("%d", &in);

  d2 = in % 10;
  d1 = in / 10;

  printf("%d reversed is %d%d\n", in, d2, d1);

  return 0;
}
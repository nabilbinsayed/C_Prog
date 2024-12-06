#include <stdio.h>
int main(void)

// Add the second, fourth, sixth, eighth, tenth, and twelfth digits.
// Add the first, third, fifth, seventh, ninth, and eleventh digits.
// Multiply the first sum by 3 and add it to the second sum.
// Subtract 1 from the total.
// Compute the remainder when the adjusted total is divided by 10.
// Subtract the remainder from 9

// incomplete program due to lack of inspiration

{
  int d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12, d13;
  int cd;

  printf("Enter the 13-digit EAN code: ");
  scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d1, &d2, &d3, &d4, &d5, &d6, &d7, &d8, &d9, &d10, &d11, &d12, &d13);

  cd = ((3 * (d2 + d4 + d6 + d8 + d10 + d12) + (d1 + d3 + d5 + d7 + d9 + d11) - 1) % 10) - 9;

  printf("Check digit is: %d\n", cd);

  return 0;
}
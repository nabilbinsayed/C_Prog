/*
 * Name: variable
 * Course/Book: KN King
 * Section: 2.4
 * Purpose: playing with variable data types
 */

// #include <stdio.h>
// int main (void)

// {
//   float profit;
//   profit=2150.48f;
//   printf("%f", profit);
//   // prints 2150.479980, not 2150.48

//   return 0;
// }

#include <stdio.h>
int main(void)

{
  float profit;
  profit = 2150.48f;
  printf("%.2f", profit);
  // prints 2150.48, as intended, ommitting the 'f' doesn't change anything either
  return 0;
}

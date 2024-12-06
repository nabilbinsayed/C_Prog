// Name: Dollar Bill Exercise
// Date:
// Course/book: KN King
// Section:

// Purpose: Write a program that asks the user to enter a U.S. dollar amount and then shows how to pay that amount using the smallest number of $20, $10, $5, and $1 bills:
// Enter a dollar amount: 93
// $20 bills: 4
// $10 bills: 1
//  $5 bills: 0
//  $1 bills: 3

// Note/Highlight:

// Method1: Let's work with 123. The real problem is in data types.
// Step 1) 123/20=6.15. Floor of 6.15=6. Remember 6 and 6.15.
// 2) 6.15-6=.15 . 0.15*20=3
// 3) 3/10=0.3. Floor of 0.3=0. Remember 0 and 0.3.
// 4) 0.3-0=.3 . 0.3*10=3
// 3) 3/5=0.6. Floor of 0.6=0. Remember 0 and 0.6.
// 4) 0.6-0=.6 . 0.6*5=3
// 5? 3/1=3. Remember 3.

// Method2: (Used in the solution, probably better)
// Idea: 3=123-20*floor(123/20)

// #include <stdio.h>
// int main (void)

// {
//   int a;

//   printf("Enter the bill: ");
//   scanf("%d", &a);

//   float b=(a*1.0f)/20.0f;
//   float c=(a/20);

//   printf("%f \n", b);
//   printf("%f", c);

//   return 0;
// }

#include <stdio.h>
int main(void)

// Using the modulus operator would've made it easier

{
  int ori20, ori10, ori5, ori1;

  printf("Enter the bill: ");
  scanf("%d", &ori20);

  ori10 = ori20 - 20 * (ori20 / 20);
  ori5 = ori10 - 10 * (ori10 / 10);
  ori1 = ori5 - 5 * (ori5 / 5);

  printf("20 dollar bills: %d\n10 dollar bills: %d\n5 dollar bills: %d\n1 dollar bills: %d\n", ori20 / 20, ori10 / 10, ori5 / 5, ori1);

  return 0;
}
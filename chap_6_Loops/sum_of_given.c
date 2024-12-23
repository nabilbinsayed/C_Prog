// As a second example of the while statement, let’s write a program that sums a
//  series of integers entered by the user. Here’s what the user will see:

// This program sums a series of integers.
//  Enter integers (0 to terminate): 8 23 71 5 0
//  The sum is: 107

#include <stdio.h>
int main(void)

{
  int i; 
  int sum = 0;

  printf("This program sums a series of integers.\n");
  printf("Enter integers (0 to terminate): ");
  
  
  while (i != 0) {
    scanf("%d", &i);
    sum = sum + i;
  }

  printf("The sum is: %d\n", sum);

  return 0;
}
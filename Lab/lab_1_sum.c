// Name: Sum
// Date: 14.11.24
// Course/book: CSE-142
// Section: 
// Purpose: To find sum of two numbers
// Note/Highlight: 

#include <stdio.h>
int main (void)

{
  int a, b; 
  printf("Input an integer: ");
  scanf("%d", &a);
  printf("Input second integer: ");
  scanf("%d", &b);

  printf("The sum of %d and %d is %d\n", a, b, a+b);


  return 0; 
}
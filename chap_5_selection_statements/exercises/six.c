// Name:
// Date:
// Course/book:
// Section:
// Purpose:

//  Is the following if statement legal?
// if (n == 1-10)
//  printf("n is between 1 and 10\n"); 
// If so, what does it do when n is equal to 5?


// Note/Highlight:

#include <stdio.h>
int main(void)

{
  int n; 
  scanf("%d", &n); 
  if (n == 1-10)
    printf("n is between 1 and 10\n");

  return 0;
}
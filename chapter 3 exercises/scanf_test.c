// Name: 
// Date: 
// Course/book: 
// Section: 
// Purpose: 
// Note/Highlight: 

#include <stdio.h>
int main (void)

{
  int i, j; 
  float x; 

  printf("enter three numbers: ");
  scanf("%d%f%d", &i, &x, &j);    // 10.3 5 6

  printf("%d, %f, %d", i, x, j);

  // prints 10, 0.300000, 6

  //encounters "." and puts i=10 and stops. Accepts .3 as x. 


  return 0; 
}
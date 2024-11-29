// Name: 
// Date: 
// Course/book: 
// Section: 
// Purpose: 
// Note/Highlight: 

#include <stdio.h>
int main (void)

{
  int d1, d2, d3;  
  
  printf("Enter a three digit number: ");
  scanf("%1d%1d%1d", &d1, &d2, &d3);

  printf("%d%d%d reversed is %d%d%d\n", d1, d2, d3, d3, d2, d1);



  return 0; 
}
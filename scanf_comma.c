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
  j=1;

  printf("Enter two numbers: ");
  scanf("%d%d", &i, &j); // lets input 4, 28

  // scanf will read the 4 and store it in i. As it searches for the beginning of the second number, scanf encounters the comma. Since numbers can’t begin with a comma, scanf returns immediately. The comma and the second number are left for the next call of scanf.



  printf("%d %d", i, j);  // prints 4 1



  return 0; 
}
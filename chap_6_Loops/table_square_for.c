// Name:
// Date:
// Course/book:
// Section:
// Purpose: Prints a table of squares using a for statement
// Note/Highlight:

#include <stdio.h>
int main(void)

{
  int n; 

  printf("Enter an integer: ");
  scanf("%d", &n);

  for(int i=1; i<=n; i++) {
    printf("%d\t\t%d\n", i, i*i);
  }


  return 0;
}
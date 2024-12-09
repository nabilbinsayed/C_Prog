// Name:
// Date:
// Course/book:
// Section:
// Purpose:
// Note/Highlight:

#include <stdio.h>
int main(void)

{
  int i = 5, j = 0, k = -5;

  printf("%d", i && j || k);      // (nonzero && zero) || nonzero ---> zero || nonzero ---> nonzero = 1
  
  return 0;
}
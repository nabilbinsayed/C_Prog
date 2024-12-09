// Name:
// Date:
// Course/book:
// Section:
// Purpose: short circuit
// Note/Highlight:

#include <stdio.h>
int main(void)

{
  int i = 7, j = 8, k = 9;
  printf("%d ", i - 7 && j++ < k);      // (0) && (j++ <k)  As left operand is ZERO, the entire expression is short-circuited and the right expression is not evaluated. && lowest precedency in here. 
  printf("%d %d %d", i, j, k);
  return 0;
}
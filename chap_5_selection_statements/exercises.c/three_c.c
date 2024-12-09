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
  printf("%d ", (i = j) || (j = k));    
  // Since i = j is an assignment, it returns the value assigned, which is 8 (true).
  // Due to the logical OR operator ||, if the first operand is true, the second operand is not evaluated (short-circuit evaluation).
  // Therefore, (j = k) is not evaluated because (i = j) is true.

  // 1 8 8 9
  printf("%d %d %d", i, j, k);
  return 0;
}
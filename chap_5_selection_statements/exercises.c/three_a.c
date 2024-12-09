// Name:
// Date:
// Course/book:
// Section:
// Purpose: Short circuit behavior
// Note/Highlight:

#include <stdio.h>
int main(void)

{
  int i = 3, j = 4, k = 5;
  printf("%d\n", i < j || ++j < k); // left side is 1 so the whole expression would be 1, so right side is not evaluated thus ++j is not executed or j isn't incremented
  printf("%d %d %d", i, j, k);    // thus j remains 4
  return 0;
}
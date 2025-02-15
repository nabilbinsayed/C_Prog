// Name:
// Date:
// Course/book:
// Section:
// Purpose: short citcuit
// Note/Highlight:  '||' has lower precedence than '&&'

#include <stdio.h>
int main(void)

{
  int i = 1, j = 1, k = 1;
  printf("%d ", ++i || ++j && ++k);   // (++i) || (...) ----> 1 || (...) = 1 (right side short circuited)
  // 1 2 1 1 
  printf("%d %d %d", i, j, k);
  return 0;
}
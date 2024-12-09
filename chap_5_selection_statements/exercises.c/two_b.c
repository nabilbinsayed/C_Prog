// Name:
// Date:
// Course/book:
// Section:
// Purpose:
// Note/Highlight:

#include <stdio.h>
int main(void)

{
  int i = 2, j = 1;
  printf("%d", !!i + !j);     // !(!(i=2=nonzero)) + (!j) ---> !0 + 0 = 1

  return 0;
}
// Name:
// Date:
// Course/book:
// Section:
// Purpose:
// Note/Highlight: The relational operators are left associative.

#include <stdio.h>
int main(void)

{
  int a, i, j, k;
  i = 2, j = 4, k = 3;

  a = i < j < k; // should print 1, as (i<j) < k => (true=1) < k => true(1) = 1

  printf("%d\n", a);

  return 0;
}
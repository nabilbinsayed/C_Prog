// Name:
// Date:
// Course/book:
// Section:
// Purpose:

// Clever programmers sometimes exploit the fact that the relational and equality
// operators return integer values. For example, the value of the expression (i >= j)
// + (i == j) is either 0, 1, or 2, depending on whether i is less than, greater than,
// or equal to j, respectively

// Note/Highlight:

#include <stdio.h>
int main(void)

{
  int i, j, k;
  int l, m;
  i = 1, j = 3;

  k = (i >= j) + (i == j); // for i<j we get k=0
  printf("%d\n", k);

  i = 3, j = 1;
  k = (i >= j) + (i == j); // for i>j we got k=1

  printf("%d\n", k);

  i = 3, j = 3;
  k = (i >= j) + (i == j); // for i>j we got k=1

  printf("%d\n", k); // for i=j we get 2

  printf("Enter two numbers: ");
  scanf("%d %d", &l, &m);

  k = (l >= m) + (l == m);

  if (k == 0)
  {
    printf("%d<%d\n", l, m);
  }
  else if (k == 1)
  {
    printf("%d>%d\n", l, m);
  }
  else if (k == 2)
  {
    printf("%d=%d\n", l, m);
  }

  return 0;
}
// Name:
// Date:
// Course/book:
// Section:
// Purpose:

// 5
// 4 4
// 3 3 3
// 2 2 2 2
// 1 1 1 1 1

// Note/Highlight:

#include <stdio.h>
int main(void)

{
  int i, j, rows;
  rows = 5;

  for (i = 1; i <= rows; i++) {
    for (j = 1; j <= i; j++) {
      printf("%d ", rows - i + 1);
    }
    printf("\n");
  }
  return 0;
}
#include <stdio.h>
int main()
{
  int i, j, k;
  int rows = 3;

  for (i = 1; i <= rows; i++) {
    for (j = 1; j <= i - 1; j++) {
      printf("  ");
    }
    for (k = 1; k <= 2 * (rows - i) + 1; k++) {
      printf("* ");
    }
    printf("\n");
  }

  return 0;
}
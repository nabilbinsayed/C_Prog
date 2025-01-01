#include <stdio.h>
int main(void)
{
  int i, j, k;
  int rows = 5;

  for (i = 1; i <= rows; i++) {
    for (j = rows - i; j >= 1; j--) {
      printf("  ");
    }
    for (k = 1; k <= i; k++) {
      printf("* ");
    }
    printf("\n");
  }

  return 0;
}
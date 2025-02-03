// n = 5
// 11111
// 10001
// 10001
// 10001
// 11111

#include <stdio.h>
int main()
{
  int i, j, rows = 16;

  for (i = 1; i <= rows; i++) {
    if (i == 1 || i == rows) {
      for (j = 1; j <= rows; j++) {
        printf("1 ");
      }
    }
    else {
      for (j = 1; j <= rows; j++) {
        if (j == 1 || j == rows) {
          printf("1 ");
        }
        else {
          printf("0 ");
        }
      }
    }
    printf("\n");
  }

  return 0;
}
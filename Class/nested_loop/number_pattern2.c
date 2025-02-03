// n = 5
// 55555
// 54444
// 54333
// 54322
// 54321

#include <stdio.h>
int main()
{
  int i, j, rows = 5;

  for (i = rows; i >= 1; i--) {
    for (j = rows; j >= 1; j--) {
      if (j == i) {
        printf("%d", i);
      }
      else {
        printf("%d", j);
      }
    }
    printf("\n");
  }

  return 0;
}
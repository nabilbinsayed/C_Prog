
//         1
//       1 2 1
//     1 2 3 2 1
//   1 2 3 4 3 2 1
// 1 2 3 4 5 4 3 2 1

#include <stdio.h>
int main(void)

{
  int i, j, k, m, rows, mid;
  rows = 10;
  mid = (rows + 1) / 2;

  for (i = 1; i <= rows; i++) {
    for (j = 1; j <= rows - i; j++) {
      printf("  ");
    }
    for (k = 1; k <= i; k++) {
      printf("%d ", k);
    }
    for (m = k - 2; m >= 1; m--) {
      printf("%d ", m);
    }
    printf("\n");
  }

  return 0;
}
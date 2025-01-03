//         *
//       * * *
//     * * * * *
//   * * * * * * *
// * * * * * * * * *
//   * * * * * * *
//     * * * * *
//       * * *
//         *

#include <stdio.h>
int main()
{
  int i, j, k, l, m, n, mid, rows;
  rows = 9;
  mid = (rows + 1) / 2;

  for (i = 1; i <= mid; i++) {
    for (j = 1; j <= mid - i; j++) {
      printf("  ");
    }
    for (k = 1; k <= 2 * i - 1; k++) {
      printf("* ");
    }
    printf("\n");
  }

  // printf("%d\n", k);
  // prints 6

  // printf("%d\n", i);

  for (l = 1; l <= mid - 1; l++) {
    for (m = 1; m <= l; m++) {
      printf("  ");
    }
    for (n = 1; n <= k - 3 - 2 * (l - 1); n++) { // k-3 because 1 to subtract to counter the k++, and then -2 to get the next lower odd integer
      printf("* ");
    }

    printf("\n");
  }

  return 0;
}
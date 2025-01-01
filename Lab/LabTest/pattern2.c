// n = 5
// 11011
// 11011
// 00000
// 11011
// 11011

#include <stdio.h>
int main()
{
  int n = 7;

  int mid = (n + 1) / 2;

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      if (i == mid) {
        printf("0");
      }
      else {
        if (j != mid)
          printf("1");
        else
          printf("0");
      }
    }
    printf("\n");
  }

  return 0;
}
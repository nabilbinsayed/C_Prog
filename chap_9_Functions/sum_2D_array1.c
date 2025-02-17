#include <stdio.h>
#define LEN 10

int sum_2D_array(int a[][LEN], int n);

int main()
{
  int m, b[LEN][LEN], total = 0;
  for (int i = 0; i < LEN; i++) {
    for (int j = 0; j < LEN; j++) {
      b[i][j] = (LEN * i) + j + 1;
      printf("%4d", b[i][j]);
    }
    printf("\n");
  }

  total = sum_2D_array(b, LEN);

  printf("Sum is %d\n", total);

  return 0;
}

int sum_2D_array(int a[][LEN], int n)
{
  int sum = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < LEN; j++) {
      sum += a[i][j];
    }
  }
  return sum;
}
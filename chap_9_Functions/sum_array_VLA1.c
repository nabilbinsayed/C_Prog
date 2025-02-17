#include <stdio.h>

int sum_2D(int m, int n, int a[m][n]);
void print_array(int m, int n, int a[m][n]);

int main()
{
  int x = 5, y = 5;
  int a[x][y];

  for (int i = 0; i < x; i++) {
    for (int j = 0; j < y; j++) {
      if (i == j) {
        a[i][j] = 1;
      }
      else {
        a[i][j] = 0;
      }
    }
  }

  print_array(x, y, a);
  printf("Sum of array elements = %d\n", sum_2D(x, y, a));
}

int sum_2D(int m, int n, int a[m][n])
{
  int sum = 0;
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      sum += a[i][j];
    }
  }
  return sum;
}

void print_array(int m, int n, int a[m][n])
{
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      printf("%d ", a[i][j]);
    }
    printf("\n");
  }
}
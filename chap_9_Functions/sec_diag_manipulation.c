#include <stdio.h>
#define N 5

int sum_2D(int m, int n, int a[m][n]);
void print_array(int m, int n, int a[m][n]);

int main()
{
  int m_arr[N][N] = {0};

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      if ((i + j) == (N - 1)) {
        m_arr[i][j] = 1;
      }
    }
  }

  print_array(N, N, m_arr); 
  printf("Sum = %d\n",  sum_2D(N, N, m_arr));
  
  return 0;
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
#include <stdio.h>
#define N 5

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

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      printf("%d ", m_arr[i][j]);
    }
    printf("\n");
  }

  return 0;
}
#include <stdio.h>
int main()
{
  int M, N, i, j, L;
  int larger1, larger2;
  int a[M], b[N], c[L];

  printf("Enter number of elements of 'a' array: ");
  scanf("%d", &M);
  for (i = 0; i < M; i++) {
    printf("enter element: ");
    scanf("%d", &a[i]);
  }
  printf("Enter number of elements of 'b' array: ");
  scanf("%d", &N);
  for (i = 0; i < M; i++) {
    printf("enter element: ");
    scanf("%d", &b[i]);
  }

  if (M == N) {
    for (i = 0, j = 0; i < M; i++, j++) {
      larger1 = a[i] >= b[j] ? a[i] : b[j];
      larger2 = a[i] < b[j] ? a[i] : b[j];
      c[i] = larger1;
    }
    for (i = 0; i < M + N; i++) {
      printf("%d ", c[i]);
    }
  }


  return 0; 
}
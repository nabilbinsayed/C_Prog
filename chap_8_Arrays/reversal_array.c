#include <stdio.h>
#define N 4
int main()
{
  int a[N];
  int i;

  for (i = 0; i < N; i++) {
    printf("Enter element no %d: ", i + 1);
    scanf("%d", &a[i]);
  }
  printf("Original list:\n");

  for (i = 0; i < N; i++) {
    printf("%d ", a[i]);
  }
  printf("Reversed list:\n");

  for (i = N - 1; i >= 0; i--) {
    printf("%d ", a[i]);
  }

  return 0;
}
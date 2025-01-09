// Name:
// Date:
// Course/book:
// Section:
// Purpose:
// Note/Highlight:

#include <stdio.h>
#define N 5
int main(void)

{
  int a[N];
  int i;
  int sum = 0;

  for (i = 0; i < N; i++) {
    printf("Enter element no %d: ", i + 1);
    scanf("%d", &a[i]);
  }
  for (i = 0; i < N; i++) {
    sum += a[i];
  }
  for (i = 0; i < N; i++) {
    printf("%d ", a[i]);
  }

  printf("\nsum = %d\n", sum);

  return 0;
}
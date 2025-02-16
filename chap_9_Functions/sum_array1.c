#include <stdio.h>
#define LEN 100

int sum_array(int a[], int n);

int main(void)
{
  int b[LEN], total;

  for (int i = 0; i < LEN; i++) {
    b[i] = i + 1;
    printf("%d ", b[i]);
  }
  total = sum_array(b, LEN);

  printf("\nSum of the array is %d\n", total);
  printf("Sum of first 50 elements is %d\n", sum_array(b, 50));

  return 0;
}

int sum_array(int a[], int n)
{
  int i, sum = 0;

  for (i = 0; i < n; i++) {
    sum += a[i];
  }

  return sum;
}

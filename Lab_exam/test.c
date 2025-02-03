#include <stdio.h>

void maxmin(int arr[], int n, int *max, int *min);

int main()
{
  int n;
  printf("Enter the number of elements: ");
  scanf("%d", &n);

  int arr[n];
  printf("Enter the elements of the array: ");
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  int max, min;
  maxmin(arr, n, &max, &min);

  printf("Maximum element is %d\n", max);
  printf("Minimum element is %d\n", min);

  return 0;
}

void maxmin(int arr[], int n, int *max, int *min)
{
  *max = arr[0];
  *min = arr[0];
  for (int i = 1; i < n; i++) {
    if (arr[i] > *max) {
      *max = arr[i];
    }
    if (arr[i] < *min) {
      *min = arr[i];
    }
  }
}
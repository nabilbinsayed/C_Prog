#include <stdio.h>
int main()
{
  int arr[] = {1, 0, 5, -2, 3, 4, 2};
  int N = (int)sizeof(arr) / sizeof(arr[0]);

  int arr_saved[N];
  int temp, count;

  for (int i = 0; i < N; i++) {
    arr_saved[i] = arr[i];
  }

  do {
    count = 0;
    for (int i = 0; i < N - 1; i++) {
      if (arr[i] > arr[i + 1]) {
        temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
        count++;
      }
    }
  } while (count > 0);

  printf("The original array (%d members): ", N);

  for (int i = 0; i < N; i++) {
    printf("%d ", arr_saved[i]);
  }

  printf("\nThe sorted array: ");

  for (int i = 0; i < N; i++) {
    printf("%d ", arr[i]);
  }

  return 0;
}
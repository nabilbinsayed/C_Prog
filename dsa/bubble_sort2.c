#include <stdio.h>
#define size (int)sizeof(arr) / sizeof(arr[0])
int main()
{
  int arr[] = {2, 6, 5, 1, 3, 9, 11, 13, 12, 4, 3, 1, 2};
  int count, temp;

  do {
    count = 0;
    for (int i = 0; i < size - 1; i++) {
      if (arr[i] > arr[i + 1]) {
        temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
        count++;
      }
    }
  } while (count > 0);

  for (int j = 0; j < size; j++) {
    printf("%d ", arr[j]);
  }

  return 0;
}
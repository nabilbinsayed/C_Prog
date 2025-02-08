#include <stdio.h>
#define size_arr ((int)sizeof(arr) / sizeof(arr[0]))
int main()
{

  // If a is an array of 10 integers, then sizeof(a) is typically 40 (assuming that each integer requires four bytes).
  // We can also use sizeof to measure the size of an array element, such as a[0]. Dividing the array size by the element size gives the length of the array:
  // sizeof(a) / sizeof(a[0])

  int arr[] = {1, 2, 3, 4};

  printf("Number of array elements: %d\n", size_arr);

  for (int i = 0; i < size_arr; i++) {
    printf("%d ", arr[i]);
  }

  return 0;
}
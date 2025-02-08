#include <stdio.h>
int main()
{
  int arr[5] = {1, 2, 3, 4};
  for (int i = 0; i < 5; i++) {
    printf("%d\n", arr[i]);
  }
  printf("\n");
  int arr2[5] = {0};
  for (int i = 0; i < 5; i++) {
    printf("%d\n", arr2[i]);
  }
  return 0;
}
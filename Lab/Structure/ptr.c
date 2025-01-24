#include <stdio.h>

int main() {
  int arr[5] = {10, 20, 30, 40, 50};

  printf("Initial pointer address: %p\n", (void*)ptr);
  printf("Initial pointer value: %d\n", *ptr);
  int *ptr = arr;
  ptr += 2;
  printf("Pointer address after moving forward by 2: %p\n", (void*)ptr);
  printf("Pointer value after moving forward by 2: %d\n", *ptr);

  ptr -= 1;
  printf("Pointer address after moving backward by 1: %p\n", (void*)ptr);
  printf("Pointer value after moving backward by 1: %d\n", *ptr);

  return 0;
}


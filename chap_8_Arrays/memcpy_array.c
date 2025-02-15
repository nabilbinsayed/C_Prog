#include <stdio.h>
#include <string.h> // !!!
#define size_a (int)sizeof(a) / sizeof(a[0])
int main()
{
  int a[] = {1, 2, 4, 5};
  int b[size_a];

  memcpy(b, a, sizeof(b)); // NOT size_a or size_b
  // faster for large arrays

  for (int i = 0; i < size_a; i++) {
    printf("%d ", b[i]);
  }

  return 0;
}
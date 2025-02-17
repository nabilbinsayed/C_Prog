#include <stdio.h>
int main()
{
  int m = 20;
  for (int i = 1; i <= 20; i++) {
    if (i % 2 != 0) {
      continue;
    }
    printf("%d ", i);
  }

  return 0;
}
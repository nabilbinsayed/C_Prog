#include <stdio.h>
int main()
{
  int c[10] = {5, 1, 9, [4] = 3, 7, 2, [8] = 6};
  // guess: 5 1 9 0 3 7 2 0 6 0 0 
  for (int i = 0; i < 10; i++) {
    printf("%d ", c[i]);
  }

  return 0;
}
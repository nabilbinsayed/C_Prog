#include <stdio.h>
int main(void) {
  int i, j;

  i = 1, j = 2;
  int k = 2 * i + j - i;
  if (i > j) {
    printf("%d is greater than %d\n", i, j);
  } else if (i < j) {
    printf("%d is greater than %d\n", j, i);
  } else {
    printf("both of them are same\n");
  }

  return 0;
}
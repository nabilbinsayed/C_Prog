#include <stdio.h>
int main(void)
{
  int i, j;

  i = 2, j = 1;
  int k = 2 * i + j - i;
  // if (i > j) {
  //   printf("%d is greater than %d\n", i, j);
  // }
  // else if (i < j) {
  //   printf("%d is greater than %d\n", j, i);
  // }
  // else {
  //   printf("both of them are same\n");
  // }

  if (!(i < j)) {
    if (i == j) {
      printf("i=j\n");
    }
    else {
      printf("i>j\n");
    }
  }
  else {
    printf("i<j\n");
  }

  return 0;
}
#include <stdio.h>

int main()

{
  int n;

  printf("Enter a number: ");
  scanf("%d", &n);

  for (int i = 1; i <= n; i++) {

    if (i % 2 == 0) // skips the even numbers
      continue;

    printf("%d\n", i);
  }
  return 0;
}
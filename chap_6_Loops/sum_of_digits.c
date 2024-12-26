#include <stdio.h>
int main()
{
  int m, num, d, sum = 0;

  // printf("Enter a number: ");
  scanf("%d", &num);
  m = num;
  do {
    d = num % 10;
    sum += d;
    num /= 10;
  } while (num > 0);

  printf("%d\n", sum);

  return 0;
}
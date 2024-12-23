// Name:
// Date:
// Course/book:
// Section:
// Purpose:
// Note/Highlight:

#include <stdio.h>
int main(void)

{
  int i = 1, sum = 0, n;

  while (i <= 10) {
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n == 0)
      continue;
    sum += n;
    i++;
  }

  printf("The sum is %d and average is %f\n", sum, (float)sum / i);

  return 0;
}
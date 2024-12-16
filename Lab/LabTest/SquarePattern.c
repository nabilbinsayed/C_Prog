#include <math.h>
#include <stdio.h>
int main()
{
  int b, n, sum = 0;

  printf("Enter base and power: ");
  scanf("%d %d", &b, &n);

  // Lets talk logic,

  for (int i = 1; i <= n - 1; i++) {
    sum = sum + n + pow(b, i);
  }
  sum = sum + n;

  

  printf("sum= %d", sum);
  return 0;
}

// Correct Solution

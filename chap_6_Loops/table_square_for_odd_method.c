// Name:
// Date:
// Course/book:
// Section:
// Purpose: Prints a table of squares using an odd method
// Note/Highlight:

#include <stdio.h>
int main(void)

{
  int n;

  printf("This program prints a table of squares.\n");
  printf("Enter number of entries in table: ");
  scanf("%d", &n);

  for (int i = 1, square = 1, odd = 1; i <= n; odd += 2, square += odd, i++) {
    printf("%d\t\t%d\n", i, square);
  }

  return 0;
}
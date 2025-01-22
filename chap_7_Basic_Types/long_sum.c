#include <stdio.h>
int main()
{
  long n, sum = 0;

  printf("Enter integers (0 to terminate): ");

  do {
    scanf("%ld", &n);
    sum += n;
  } while (n != 0);

  // char ch = sum;

  // putchar(ch);

  printf("Sum = %ld\n", sum); 

  return 0;
}

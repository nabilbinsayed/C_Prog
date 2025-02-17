#include <math.h>
#include <stdio.h>

int digit_no(int n);

int main()
{
  int num, digit, sum = 0;
  printf("enter an integer: ");
  scanf("%d", &num);
  const int num_save = num;
  const int num_digits = digit_no(num_save); // Storing the number of digits

  do {
    digit = num % 10;
    sum += (int)pow(digit, num_digits);
    num /= 10;

  } while (num != 0);

  if (num_save == sum) {
    printf("%d is an armstrong number\n", num_save);
  }
  else {
    printf("%d is not an armstrong number\n", num_save);
  }

  return 0;
}

int digit_no(int n)
{
  int count = 0;
  do {
    n /= 10;
    count++;
  } while (n != 0);

  return count;
}
#include <stdbool.h>
#include <stdio.h>
int main()
{
  bool digit_seen[10] = {false};
  long n;
  int digit;

  printf("Enter a number: ");
  scanf("%ld", &n);

  for (digit = n % 10; n > 0; n /= 10, digit = n % 10) {
    if (digit_seen[digit]) {
      break;
    }
    digit_seen[digit] = true;
  }
  if (n > 0) {
    printf("Repeated digit\n");
  }
  else {
    printf("No Repeated digit\n");
  }

  return 0;
}
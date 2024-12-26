#include <stdio.h>
int main(void)
{
  int num1, num2;

  printf("Enter a number: ");
  scanf("%d", &num1);
  printf("%d\n", num1);
  printf("Enter another number: ");
  scanf("%d", &num2);

  if (num1 == num2) {
    printf("matched!\n");
    return 0; 
  }
  else {
    printf("%d\n", num2);
    goto recheck;
  }

recheck:
  num1 = num2;
  printf("Enter another number: ");
  scanf("%d", &num2);

  if (num1 == num2) {
    printf("matched!\n");
  }
  else {
    printf("%d\n", num2);
    goto recheck;
  }

  return 0;
}

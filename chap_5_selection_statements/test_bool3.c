#include <stdbool.h>
#include <stdio.h>
int main(void)
{
  bool flag1, flag2;
  bool AND, OR, NOT1, NOT2;

  printf("Enter two boolean values: ");
  // scanf("%d %d", &flag1, &flag2);
  // This doesn't work as scanf doesn't directly support bool type. We have to scan integers and then put them into bool variables

  int temp1, temp2;
  scanf("%d %d", &temp1, &temp2);

  flag1 = (temp1 == 1);
  flag2 = (temp2 == 1);

  AND = flag1 && flag2;
  OR = flag1 || flag2;
  NOT1 = !flag1;
  NOT2 = !flag2;

  printf("%d AND %d = %d\n", flag1, flag2, AND);
  printf("%d OR %d = %d\n", flag1, flag2, OR);
  printf("NOT %d = %d\n", flag1, NOT1);
  printf("NOT %d = %d\n", flag2, NOT2);

  return 0;
}
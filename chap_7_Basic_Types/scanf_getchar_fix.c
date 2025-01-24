
#include <stdio.h>
int main()
{
  char command;
  int i;

  printf("Enter an integer: ");
  scanf("%d", &i);

  while (getchar() != '\n') // skips rest of the line/input buffer
    ;

  printf("Enter a command: ");
  command = getchar();

  printf("\n%d%cblabla\n", i, command);

  return 0;
}
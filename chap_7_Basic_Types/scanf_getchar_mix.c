//  printf("Enter an integer: ");
//  scanf("%d", &i);
//  printf("Enter a command: ");
//  command = getchar();

#include <stdio.h>
int main()
{
  char command;
  int i;

  printf("Enter an integer: ");
  scanf("%d", &i);

  printf("Enter a command: \n");
  command = getchar(); // reads leftover '\n'

  printf("%d%cblabla\n", i, command);

  return 0;
}
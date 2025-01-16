#include <stdio.h>
int main()
{
  int i;
  char command;

  printf("Enter an integer: ");
  scanf("%d", &i);
  printf("Enter a command: ");
  command = getchar();
  printf("You entered the command: "); 
  putchar(command); 
  putchar('\n'); 

  return 0;
}

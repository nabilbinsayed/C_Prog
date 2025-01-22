#include <stdio.h>
int main()
{
  char ch;

  printf("enter a line of text: ");

  while (ch != '\n') {
    ch = getchar();
    if (ch == ' ') {
      break;
    }
    putchar(ch);
  }
  while ((ch = getchar()) == ' ')
    ;
  

  return 0;
}
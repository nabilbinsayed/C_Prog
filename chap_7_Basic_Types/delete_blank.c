#include <stdio.h>
int main()
{
  char ch;

  printf("enter a line of text: ");

  while (ch != '\n') {
    ch = getchar();
    if (ch == ' ' || ch == '\n') {
      break;
    }
    putchar(ch);
  }
  while ((ch = getchar()) == ' ')
    ;
  while (ch != '\n') {
    ch = getchar();
    if (ch == ' ' || ch == '\n') {
      break;
    }
    putchar(ch);
  }



  return 0;
}
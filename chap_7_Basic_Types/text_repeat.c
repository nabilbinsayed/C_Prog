#include <stdio.h>
int main()
{
  char ch;

  printf("Enter text: ");

  while ((ch = getchar()) != '\n') {
    putchar(ch);
  }

  return 0;
}
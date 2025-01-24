#include <stdio.h>
int main()
{
  int len = 0;
  char ch;

  printf("Enter a message: ");
  ch = getchar();

  while (ch != '\n') {
    ch = getchar();
    len++;
  }
  printf("your message was %d character(s) long\n", len); 

  return 0;
}
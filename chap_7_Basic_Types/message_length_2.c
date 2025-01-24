#include <stdio.h>
int main()
{
  int len = 0;
  char ch;

  printf("enter a message: ");

  while (getchar() != '\n') {
    len++;
  }
  printf("your message was %d character(s) long\n", len);

  return 0;
}
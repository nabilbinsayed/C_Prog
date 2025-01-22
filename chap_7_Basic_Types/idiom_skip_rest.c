#include <stdio.h>

int main()
{
  char ch;

  printf("enter a sentence: ");

  while (1) {
    scanf("%c", &ch);
    if (ch == ' ' || ch == '\n') {
      break;
    }
    printf("%c", ch);
  }

  while (getchar() != '\n')
    ;


  return 0;
}
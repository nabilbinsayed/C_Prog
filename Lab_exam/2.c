#include <stdio.h>
int main()
{
  char str[100] = "the madam ordered anna and otto to do the code";
  char word[100];
  int i;
  char ch;

  ch = getchar();

  while ((ch = getchar()) != '\n') {

    for (i = 0; ch != ' '; i++) {
      if (ch == ' ') {
        continue;
      }
      word[i] = ch;
      for(i=0; word[i]!='\0'; i++) {
        
      }
    }

  }
}
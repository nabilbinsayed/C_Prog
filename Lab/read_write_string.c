// Name:
// Date:
// Course/book:
// Section:
// Purpose:
// Note/Highlight:

#include <stdio.h>
#include <string.h>

int main(void)

{
  char ara[80], ch, x;
  int i = 0;
  while (ch != '\n') {
    ch = getchar();
    /// scanf("%c", &ch);
    ara[i] = ch;
    i++;
  }
  ara[i] = '\0';
  printf("%s", ara);

  printf("%5s\n", ara);
  printf("%15.6s\n", ara);
  printf("%15.0s\n", ara);
  printf("%-15.6s\n", ara);
  printf("%.3s\n", ara);

  i = 0;

  while (ara[i] != '\0') {
    i++;
  }
  printf("Length of the string (%s = %d)\n", ara, i);

  // using built in function

  x = strlen(ara);
  printf("Length of the string (%s = %d)\n", ara, x);

  return 0;
}
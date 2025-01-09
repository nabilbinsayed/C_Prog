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
  char str[100];
  int i = 0, x;

  gets(str);
  while (str[i] != 0) {
    i++;
  }
  printf("Length of the string (%s = %d)\n", str, i);

  // using built in function

  x = strlen(str);
  printf("Length of the string (%s = %d)\n", str, x);

  return 0;
}
#include <stdio.h>
#include <string.h>

int main()
{
  char str1[50], str2[50];
  int i = 0, x;

  gets(str1);
  gets(str2);

  x = strcmp(str1, str2);
  printf("%d\n", x);

  if (x == 0)
    printf("Strings are equal\n");
  else
    printf("Strings are not equal\n");

    return 0; 
}
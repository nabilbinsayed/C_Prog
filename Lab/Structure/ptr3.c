#include <stdio.h>
int main()
{
  int val = 10;
  int *ptr;
  ptr = &val;
  printf("val= %d\n", *ptr);
  ptr++;
  printf("val= %d\n", *ptr);
  ptr = ptr - 2;
  printf("val= %d\n", *ptr);

  for (int i = 0; i < 10; ptr++, i++) {
    printf("%d\n", *ptr);
  }
  
  return 0;
}
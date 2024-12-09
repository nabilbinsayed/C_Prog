#include <stdbool.h>
#include <stdio.h>
int main(void)
{
  bool flag = true;

  if (flag) {           // tests whether flag is 1 
    printf("True\n");
  }
  else if (!flag) {
    printf("False\n");
  }

  return 0;
}
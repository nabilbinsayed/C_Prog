#include <stdio.h>

void print_pun()
{
  printf("To C, or not to C: that is the question\n");
}

int main()
{
  for (int i = 1; i <= 10; i++) {
    print_pun();
  }

  return 0;
}
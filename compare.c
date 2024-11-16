/*
* Name: compare.c
* Course/Book: CS50
* Purpose: compare integers
*/



#include <stdio.h>
int main(void)

{
  int a, b; 

  printf("Give a: ");
  scanf("%d", &a);
  printf("Give b: ");
  scanf("%d", &b);

  if (a>b) {
    printf("a is greater than b\n");
  }
  else if (a<b) {
    printf("b is greater than a\n");
  }
  else {
    printf("a is equal to b\n");
  }

  return 0; 
}
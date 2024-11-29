// In both C89 and C99, the goal is to ensure that the value of (a / b) * b + a % b will always be equal to a
// a%b=a-(a/b)*b

#include <stdio.h>
int main (void)

{
  int a, b, modulo, div; 

  printf("Enter a and b: ");
  scanf("%d %d", &a, &b);

  modulo=a-(a/b)*b;

  printf("\n\tFrom direct operation, a%%b = %d%%%d = %d\n", a, b, a%b);
  printf("\tFrom equation, a%%b = %d%%%d = %d\n\n", a, b, modulo);

  if(modulo==a%b) {
    printf("Expression is correct\n");
  }
  else {
    printf("Expression INCORRECT\n");
  }

  return 0; 
}
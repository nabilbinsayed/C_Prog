// Purpose: Write a c program to enter two numbers and perform all arithmetic operations (5)

#include <stdio.h>
int main (void)

{
  int a, b; 
  
  printf("Enter two integers separated by a space: ");
  scanf("%d %d", &a, &b); 

  printf("\n%d+%d=%d\n", a, b, a+b);
  printf("%d-%d=%d\n", a, b, a-b);
  printf("%d*%d=%d\n", a, b, a*b);
  if (b==0) {
    printf("The second integer cannot be Zero for division or reminder calculation\n");
  }
    else {
      printf("%d/%d=%.3f\n", a, b, a*1.0f/b*1.0f);
    printf("If we divide %d by %d, the reminder is %d\n", a, b, a%b);
    }
  

  return 0; 
}


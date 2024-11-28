#include <stdio.h>
int main (void)

{
  float a; 

  printf("Enter a number: ");
  scanf("%f", &a);

  if (a>0)  {
    printf("Number is positive\n");
  }
    else if (a<0)  {
    printf("Number is negative\n");
  }
      else {
        printf("Number is Zero\n");
      }

  return 0; 
}
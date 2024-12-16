#include <stdio.h>
int main (void)

{
  float c, f; 

  printf("Enter temperature in Celsius: ");
  scanf("%f", &c);
  f=1.8f*c+32;
  printf("Temperature in Fahrenheit: %.3f\n", f);

  return 0; 
}




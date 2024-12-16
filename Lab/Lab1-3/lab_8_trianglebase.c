#include <stdio.h>
int main (void)

{
  float base, height, area; 

  printf("Enter base of the triangle: ");
  scanf("%f", &base);
  printf("Enter height of the triangle: ");
  scanf("%f", &height);

  area=0.5f*base*height; 

  printf("The area is %.3f square units\n", area);

  return 0; 
}


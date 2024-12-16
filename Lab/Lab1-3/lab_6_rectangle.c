#include <stdio.h>
int main (void)

{
  float length, breadth; 

  printf("Enter length and breadth of a rectangle separated by space: ");
  scanf("%f %f", &length, &breadth);
  printf("The area is %.3f square units\n", length*breadth);
  

  return 0; 
}


// Name: 
// Date: 
// Course/book: 
// Section: 
// Purpose: To find diameter and radius of a circle when radius is given
// Note/Highlight: 

#include <stdio.h>
#include <math.h>
#define PI acos(-1)

int main (void)

{
  double r; 

  printf("Enter radius: ");
  scanf("%lf", &r); 
  printf("The diameter is %.3lf unit and area %.3lf square unit\n", 2*r, PI*r*r);

  return 0; 
}
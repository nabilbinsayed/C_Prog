#include<stdio.h>
#include <math.h> // <math.h> library included for acos() function
#define PI acos(-1) // constant value
int main ()
{
  double radius, diameter, area; 
  scanf("%lf", &radius); 
  diameter = 2*radius; 
  area = PI*radius*radius; // 'area' variable declared

  printf("Diameter = %lf\narea = %lf", diameter, area); 
  // Correct format specifier (%lf) used
  
  return 0; 
}


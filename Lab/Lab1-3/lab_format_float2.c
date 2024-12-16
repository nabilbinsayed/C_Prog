#include <stdio.h>
int main ()
{
	float x, y; 
	
  printf("Enter two floating point numbers, separated by a space: ");
  scanf("%f %f", &x, &y);

  printf("x=%g, y=%g\n", x, y);
  printf("x=%.3f, y=%.3f\n", x, y);
  printf("Scientific notation: x=%e, y=%e\n", x, y);

  printf("x=%10.3f, y=%10.3f\n", x, y);
  printf("x=%010.3f, y=%05.3f\n", x, y);
  printf("x=%-010.3f, y=%-05.3f\n", x, y);

  return 0; 

}
  


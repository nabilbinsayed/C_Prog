#include <stdio.h>
int main()
{
  int i=7; 
  printf("%d\n", i >= 0 ? i : -i);  // literally the modulus or absolute value function = |x|
  return 0; 
}
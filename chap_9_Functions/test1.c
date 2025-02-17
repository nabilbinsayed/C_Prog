#include <stdio.h>

int increase(int a); 

int main()
{
  int x=2, y=3; 
  increase(x); 
  printf("%d\n", increase(x)); 
  printf("%d\n", x); // the argument isn't modified, prints 2 still
  return 0; 
}


int increase(int a)
{
  a+=2; 
  return a; 
}

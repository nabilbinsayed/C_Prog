#include <stdio.h>
int main()
{
  printf("x\12y"); // \12 equals \n  
  printf("\x0ax\x0ay"); // \x0a equals \n  
  printf("\n"); 
  printf("\61\n"); // \61 equals '1' 
  printf("\x2A\n"); // \x2A equals '*'

  return 0; 
}
// Name: 
// Date: 
// Course/book: 
// Section: 
// Purpose: 
// Note/Highlight: 

#include <stdio.h>
int main(void)
{
  int i;
  float x;
  i = 40;
  x = 839.21f;
  printf("|%d|%5d|%-5d|%5.3d|%05d|\n", i, i, i, i, i);
  printf("|%10.3f|%10.3e|%-10g|%010.1f|\n", x, x, x, x); // the last one prints "00000839.2"
  return 0;
}

//00000839.2 = 10 characters ALONG with "." point -_- 
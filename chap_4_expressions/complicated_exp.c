// Name: 
// Date: 
// Course/book: 
// Section: 
// Purpose: 
// Note/Highlight: 

#include <stdio.h>
int main (void)

{
  int b=4, c=5, d=3, e=2, f=1; 

  // a = b += c++ - d + --e / -f
  // a = b += (c++) - d - (--e) / (-f)

  int a = b += c++ - d + --e / -f ; 

  printf("a=%d", a); 
  
  


  return 0; 
}
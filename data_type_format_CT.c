// Name: 
// Date: 
// Course/book: 
// Section: 
// Purpose: To Print: 
    // |30.25|
    // |0030.25|
    // |0030.3|
// Note/Highlight: the "." has to be counted as one character as well. 

#include <stdio.h>
int main (void)

{
  float A=5.5f*5.5f;

  printf("%.2f\n", A);
  printf("%07.2f\n", A);
  printf("%06.1f\n", A);
  


  return 0; 
}
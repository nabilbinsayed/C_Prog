// Name: 
// Date: 
// Course/book: 
// Section: 
// Purpose: To find the third angle of a triangle when two angels are given
// Note/Highlight: 

#include <stdio.h>
int main (void)

{
  float A, B, C; 

  printf("Input the two angles in degree, separated by a space: ");
  scanf("%f %f", &A, &B);

  C=180-A-B;

  if (A<0 || B<0 || A+B>180) {
    printf("Invalid input\n");
  }
    else {
      printf("The third angle is %f degree\n", C);
  }
  
  return 0; 
}
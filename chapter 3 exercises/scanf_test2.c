// Name: 
// Date: 
// Course/book: 
// Section: 
// Purpose: 
// Note/Highlight: 

#include <stdio.h>
int main (void)

{
  int i; 
  float x, y; 

  printf("enter 3 numbers: ");
  scanf("%f%d%f", &x, &i, &y); // input: 12.3 45.6 789

  printf("%f, %d, %f", x, i, y);
  
  // guess : "12.300000, 45, 0.600000"
  // answer: "12.300000, 45, 0.600000"

  // correct

  return 0; 
}
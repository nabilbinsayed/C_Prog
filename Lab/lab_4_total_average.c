// Name: 
// Date: 
// Course/book: 
// Section: 
// Purpose: To enter five marks and find total and average
// Note/Highlight: 

#include <stdio.h>
int main (void)

{
  int a, b, c, d, e, total; 
  float avg; 
  printf("Enter five marks: ");
  scanf("%d %d %d %d %d", &a, &b, &c, &d, &e); 
  
  total=a+b+c+d+e; 
  avg=0.2f*(a+b+c+d+e); 

  printf("The total is %d and the average is %.2f\n", total, avg);

  return 0; 
}
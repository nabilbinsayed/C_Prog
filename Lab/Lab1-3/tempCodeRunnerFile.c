#include <stdio.h>
int main (void)

{
  int input, y, m, d; 

  printf("Enter the number of days: "); 
  scanf("%d", &input);

  y=input/365;
  m=(input-365*y)/30;
  d=input-y*365-m*30;

  printf("%d years, %d months, %d days", y, m, d);


  return 0; 
}
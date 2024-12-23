#include <stdio.h>
int main(void)
{
  int n, i;
  int sum = 0;
  float average; 

  for (i = 1;; i++) {
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n == 0)
      break; 
    sum = sum + n;
  }
  
  average = (float)sum /i; 
  
  printf("The sum is %d\n", sum); 
  printf("The number of term is %d\n", i); 
  printf("The average is %g\n", average);

  return 0;
}
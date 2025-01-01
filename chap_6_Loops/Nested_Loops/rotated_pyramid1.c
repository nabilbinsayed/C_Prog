#include <stdio.h>
int main()
{
  int i, j; 
  int rows=5; 
  int mid=(rows+1)/2; 

  for(i=1; i<=mid; i++) {
    for(j=1; j<=i; j++) {
      printf("* "); 
    }
    printf("\n"); 
  }
  for(i=mid+1; i<=rows; i++) {
    
  }



  return 0; 
}
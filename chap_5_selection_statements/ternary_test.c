#include <stdio.h>
int main(void)
{
  int i, j; 

  printf("Enter two numbers: ");
  scanf("%d %d", &i, &j); 

  printf("The larger is %d\n", i > j ? i : j);

  return 0; 
}

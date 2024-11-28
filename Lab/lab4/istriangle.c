#include <stdio.h>
int main(void) 

{
  float a, b, c; 

  printf("Enter three sides of a triangle, separated by a space: ");
  scanf("%f %f %f", &a, &b, &c);

  if (a+b>c && b+c>a && c+a>b) {
    printf("Triangle is valid\n");
  }
    else {
      printf("Triangle is not valid\n");
    }

  return 0; 
}
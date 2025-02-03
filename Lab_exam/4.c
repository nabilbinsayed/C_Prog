#include <stdio.h>
#include <math.h>

#define PI 3.1416

struct Circle {
  double radius;
  double area;
};

int main() {
  struct Circle circles[5];

  double total_area = 0.0;
    
  scanf("%lf %lf %lf %lf %lf", &circles[0].radius, &circles[1].radius, &circles[2].radius, &circles[3].radius, &circles[4].radius);

  for (int i = 0; i < 5; i++) {
    circles[i].area = PI * circles[i].radius * circles[i].radius;
    total_area += circles[i].area;  
    printf("Area of circle %d: %.2lf\n", i+1, circles[i].area); 
  }

  printf("Total area of all 5 circles: %.2lf\n", total_area);

  return 0;
}
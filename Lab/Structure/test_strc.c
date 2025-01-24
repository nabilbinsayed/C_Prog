#include <stdio.h>

struct student {
  int id; 
  char dept[10]; 
  float cgpa; 
}; 

int main() {
  struct student info; 
  printf("Input: \n");
  scanf("%d %s %f", &info.id, &info.dept, &info.cgpa); 

  printf("\nOutput: \n"); 
  printf("%d %s  %0.2f\n", info.id, info.dept, info.cgpa);  

  return 0; 
}
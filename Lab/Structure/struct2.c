#include <stdio.h>

struct student {
  int id; 
  char dept[10]; 
  int phy; 
  int cse; 
  int eee; 
  float avg;

}; 

int main()
{
  struct student info; 
  printf("Enter marks of Physics, CSE and EEE: ");
  scanf("%d %d %d", &info.phy, &info.cse, &info.eee); 
  printf("Enter ID and Dept: "); 
  scanf("%d %s", &info.id, &info.dept); 

  printf("Output: \n"); 

  info.avg=(info.phy+info.cse+info.eee)/3.0; 

  printf("ID = %d \nDept = %s \nAverage = %.2f\n", info.id, info.dept, info.avg); 

  
}
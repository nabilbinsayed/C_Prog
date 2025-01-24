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
  struct student info[3]; 
  
  for (int i = 0; i < 3; i++) {
    printf("Enter marks of Physics, CSE and EEE for student %d: ", i + 1);
    scanf("%d %d %d", &info[i].phy, &info[i].cse, &info[i].eee); 
    printf("Enter ID and Dept for student %d: ", i + 1); 
    scanf("%d %s", &info[i].id, &info[i].dept); 

    info[i].avg = (info[i].phy + info[i].cse + info[i].eee) / 3.0; 
  }

  printf("Output: \n"); 
  for (int i = 0; i < 3; i++) {
    printf("ID = %d \nDept = %s \nAverage = %.2f\n", info[i].id, info[i].dept, info[i].avg); 
  }

  return 0;
}


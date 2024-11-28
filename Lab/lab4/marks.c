#include <stdio.h>
int main(void)
{
  // Write a C program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer. 	    Calculate percentage and grade according to following:      (Use else if Ladder)
  // Percentage >= 90% : Grade A 
  // Percentage >= 80% : Grade B 
  // Percentage >= 70% : Grade C 
  // Percentage >= 60% : Grade D 
  // Percentage >= 40% : Grade E 
  // Percentage < 40% : Grade F

  float p, ch, b, m, cm, percentage; 
  char grade; 

  printf("Input marks of five subjects, Physics, Chemistry, Biology, Mathematics and Computer: ");
  scanf("%f %f %f %f %f", &p, &ch, &b, &m, &cm);
  
  percentage=0.2f*(p+ch+b+m+cm);

  if (percentage>=90) {
    grade='A';
  }
  else if (percentage>=80) {
    grade='B';
  }
  else if (percentage>=70) {
    grade='C';
  }
  else if (percentage>=60) {
    grade='D';
  }
  else if (percentage>=40) {
    grade='E';
  }
  else if (percentage<40) {
    grade='F';
  }

  printf("Percentage is: %.2f\nGrade is: %c\n", percentage, grade);


  return 0; 
}
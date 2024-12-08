// Name:
// Date:
// Course/book:
// Section:
// Purpose: Learning the Switch statement. 
// Note/Highlight: 

// No brace required around statements. 
// Only constant expressions are allowed, or characters, but not floating points, strings or equations. 
// Order doesn't matter. 
// Cases can be packed together. 
// Default case isn't compulsory. 



#include <stdio.h>
int main(void)
{
  int percentage;

  printf("Enter grade point: ");
  scanf("%d", &percentage);

  switch (percentage / 5) {

  case 8:
    printf("CG: 2.00, Grade: D\n");
    break;
  case 9:
    printf("CG: 2.25, Grade: C\n");
    break;
  case 10:
    printf("CG: 2.50, Grade: C+\n");
    break;
  case 11:
    printf("CG: 2.75, Grade: B-\n");
    break;
  case 12:
    printf("CG: 3.00, Grade: B\n");
    break;
  case 13:
    printf("CG: 3.25, Grade: B+\n");
    break;
  case 14:
    printf("CG: 3.50, Grade: A-\n");
    break;
  case 15:
    printf("CG: 3.75, Grade: A\n");
    break;
  case 16:
  case 17:
  case 18:
  case 19:
  case 20:
    printf("CG: 4.00, Grade: A+\n");
    break;

  default:
    printf("Fail/Invalid Grade\n");
    break;
  }

  return 0;
}
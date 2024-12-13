// Name:
// Date:
// Course/book:
// Section:
// Purpose:
//    The following if statement is unnecessarily complicated. Simplify it as much as possible.
// (Hint: The entire statement can be replaced by a single assignment.)
// if (age >= 13)
//  if (age <= 19)
//  teenager = true;
//  else
//  teenager = false;
// else if (age < 13)
//  teenager = false;

// Note/Highlight:

#include <stdbool.h>
#include <stdio.h>
int main(void)

{
  bool teenager;
  int age;
  printf("enter age: ");
  scanf("%d", &age);

  teenager = (age >= 13 && age <= 19) ? true : false;

  switch (teenager) {
  case true:
    printf("Teenager\n");
    break;
  case false:
    printf("Not a teenager\n");
    break;
  }

  // if (teenager==true) {
  //   printf("Teenager\n");
  // }
  // else {
  //   printf("Not a teenager\n");
  // } 

  return 0;
}
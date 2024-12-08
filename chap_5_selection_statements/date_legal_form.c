// Name: Printing a Date in Legal Form
// Date:
// Course/book:
// Section:
// Purpose:

// Contracts and other legal documents are often dated in the following way:
// Dated this __________ day of __________ , 20__ .
// Let’s write a program that displays dates in this form. We’ll have the user enter the
// date in month/day/year form, then we’ll display the date in “legal” form:
// Enter date (mm/dd/yy): 7/19/14
// Dated this 19th day of July, 2014.
// We can get printf to do most of the formatting. However, we’re left with two
// problems: how to add “th” (or “st” or “nd” or “rd”) to the day, and how to print the
// month as a word instead of a number

// Note/Highlight:

#include <stdio.h>
int main(void)

{
  int mm, dd, yy;

  printf("Enter date(mm/dd/yy): ");
  scanf("%d/%d/%d", &mm, &dd, &yy);

  printf("Dated this %d", dd);

  switch (dd) {
  case 1:
  case 21:
  case 31:
    printf("st");
    break;
  case 2:
  case 22:
    printf("nd");
    break;
  case 3:
  case 23:
    printf("rd");
    break;

  default:
    printf("th");
    break;
  }

  printf(" day of ");

  switch (mm) {
  case 1:
    printf("January");
    break;
  case 2:
    printf("February");
    break;
  case 3:
    printf("March");
    break;
  case 4:
    printf("April");
    break;
  case 5:
    printf("May");
    break;
  case 6:
    printf("June");
    break;
  case 7:
    printf("July");
    break;
  case 8:
    printf("August");
    break;
  case 9:
    printf("September");
    break;
  case 10:
    printf("October");
    break;
  case 11:
    printf("November");
    break;
  case 12:
    printf("December");
    break;
  }

  printf(", 20%.2d.\n", yy);

  return 0;
}
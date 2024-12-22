//  Write a program that asks the user for a 24-hour time, then displays the time in 12-hour
//  form:
//  Enter a 24-hour time: 21:11
//  Equivalent 12-hour time: 9:11 PM
//  Be careful not to display 12:00 as 0:00.

#include <stdio.h>
int main()
{
  int hour1, min1, hour2;
  char AorP;

  printf("Enter a 24-hour time: ");
  scanf("%d:%d", &hour1, &min1);

  // hour2 = hour1;
  // AorP = 'A';

  // if (hour1 > 24 || hour1 < 0 || min1 > 60 || min1 < 0) {
  //   printf("Invalid input\n");
  // }
  // else if (hour1 >= 12) {

  //   hour2 = hour1 - 12;
  //   AorP = 'P';

  //   if (hour1 == 12 && min1==0) {
  //     AorP = 'P';
  //   }
  //   printf("Equivalent 12-hour time: %d:%02d %CM\n", hour2, min1, AorP);
  // }
  // else {
  //   printf("Equivalent 12-hour time: %d:%02d %CM\n", hour2, min1, AorP);

  // }

  if (hour1 < 0 || hour1 > 24 || min1 < 0 || min1 > 60) {
    printf("Invalid input\n");
  }
  else {
    AorP = 'A';
    hour2 = hour1;
    if (hour1 == 12 && min1 == 0) {
      hour2 = 12;
      AorP = 'P';
    }
    else if (hour1 > 12) {
      hour2 = hour1 - 12;
      AorP = 'P';
    }

    printf("Equivalent 12-hour time: %d:%02d %CM\n", hour2, min1, AorP);
  }

  return 0;
}
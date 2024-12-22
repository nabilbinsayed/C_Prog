#include <stdio.h>
int main()
{
  int hour, minute;
  int netmin;
  char AorP;

  printf("Enter a 24-hour time: ");
  scanf("%d:%d", &hour, &minute);
  
  netmin = 60 * hour + minute;

  if(netmin>1440 || netmin<0) {
    printf("invalid input\n"); 
  }
  else {
    if(netmin>1140) {
      printf("Closest departure time is 9:45 p.m., arriving at 11:58 p.m.\n");
    }
    else if(netmin>945) {
      printf("Closest departure time is 7:00 p.m., arriving at 11:58 p.m.\n");
    }
    else if(netmin>840) {
      printf("Closest departure time is 3:45 p.m., arriving at 11:58 p.m.\n");
    }
    else if(netmin>767) {
      printf("Closest departure time is 2:00 p.m., arriving at 11:58 p.m.\n");
    }
    else if(netmin>679) {
      printf("Closest departure time is 11:19 a.m., arriving at 11:58 p.m.\n");
    }
    else if(netmin>583) {
      printf("Closest departure time is 9:43 a.m., arriving at 11:58 p.m.\n");
    }
    else if(netmin>480 || netmin<480) {
      printf("Closest departure time is 8:00 a.m., arriving at 11:58 p.m.\n");
    }

  }

  

  return 0;
}
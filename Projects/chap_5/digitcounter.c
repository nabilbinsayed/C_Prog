// Write a program that calculates how many digits a number contains:
//  Enter a number: 374
//  The number 374 has 3 digits
//  You may assume that the number has no more than four digits. Hint: Use if statements to
//  test the number. For example, if the number is between 0 and 9, it has one digit. If the num
// ber is between 10 and 99, it has two digits.

#include <stdio.h>
int main()
{
  int num, digit=0; 

  printf("Enter a number between 0 and 999: "); 
  scanf("%d", &num); 

  if(num<0 || num>999)  {
    printf("invalid input\n"); 
  } 
  else if(num>=0 && num<10) {
    printf("Digit = 1\n"); 
  }
  else if(num>=10 && num<100) {
    printf("Digit = 2\n"); 
  }
  else {
    printf("Digit = 3\n"); 
  }
  
}
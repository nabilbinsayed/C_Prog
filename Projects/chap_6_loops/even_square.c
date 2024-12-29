//  Write a program that prompts the user to enter a number n, then prints all even squares
//  between 1 and n. For example, if the user enters 100, the program should print the following:
//  4
//  16
//  36
//  64
//  100

#include <stdio.h>
int main()
{
  int n; 
  printf("Enter an integer: "); 
  scanf("%d", &n); 

  for(int i=1; i*i<=n; i++) {
    if(i%2==0) {
      printf("%d\n", i*i); 
    }
  }

  return 0; 

}
// Write a program that finds the largest and smallest of four integers entered by the user:
//  Enter four integers: 21 43 10 35
//  Largest: 43
//  Smallest: 10
//  Use as few if statements as possible.

#include <stdio.h>
int main()
{
  int n1, n2, n3, n4;
  int l1, s1, largest, smallest;

  printf("Enter four integers: ");
  scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

  largest = smallest = n1;

  if(n2>largest) largest=n2; 
  if(n3>largest) largest = n3; 
  if(n4>largest) largest=n4; 

  printf("Largest is %d\n", largest); 

  if(n2<smallest) smallest=n2; 
  if(n3<smallest) smallest = n3; 
  if(n4<smallest) smallest=n4; 

  printf("smallest is %d\n", smallest);




  return 0; 
}
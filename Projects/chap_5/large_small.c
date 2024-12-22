// Write a program that finds the largest and smallest of four integers entered by the user:
//  Enter four integers: 21 43 10 35
//  Largest: 43
//  Smallest: 10
//  Use as few if statements as possible.

#include <stdio.h>
int main()
{
  int n1, n2, n3, n4; 
  int l1, largest;
  int s1; 

  printf("Enter four integers: "); 
  scanf("%d %d %d %d", &n1, &n2, &n3, &n4); 

  l1 = (n1>n2) ? n1 : n2; 
  l1 = (l1>n3) ? ((l1>n4) ? l1 : n4) : ((n3>n4) ? n3 : n4); // 4 statements or checks
 
  printf("Largest is %d\n", l1); 

  l1 = (n1<n2) ? n1 : n2; 
  l1 = (l1<n3) ? ((l1<n4) ? l1 : n4) : ((n3<n4) ? n3 : n4); 

  printf("Smallest is %d\n", l1); 

  return 0; 
}
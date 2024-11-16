#include<stdio.h>

int main() 
{
  int a,b,c; 
  scanf("%d %d", &a, &b); //  '&' properly used
  c= 180-a-b;  // ';' added after statement 
  printf("%d\n", c); // Irrelevant '&' deleted 
  return 0; 
}

// #include<stdio.h>

// int main() 
// {
//   int a,b,c; // angles can be non-integers too, so float should be taken
//   scanf("%d %d", a, &b); //  '&' not used before 'a' for scanning variable
//   c= 180-a-b  // Not Using ';' after every statement 
//   printf("%d\n", &c); // Misusing '&' for printing variable 
//   return 0; 
// }






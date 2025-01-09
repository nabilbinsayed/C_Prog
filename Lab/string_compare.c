#include <stdio.h>
int main()
{
  int M=0, N=0; 
  
  char str1[M];
  char str2[N];
  char ch;
  int i, j; 
  for (i = 0; ch != '\n'; i++) {
    ch = getchar();
    str1[i]=ch; 
    M++; 
  }
  str1[i]='\0'; 
  printf("%s\n", str1); 
}
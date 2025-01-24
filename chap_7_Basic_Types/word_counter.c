#include <stdio.h>
int main()
{
  int count = 0;
  char ch;
  printf("Enter a line: ");
  ch = getchar();
  while (1) {
    if (ch == '\n' && count == 0) {
      break;
    }
    else if(ch=='\n') {
      break; 
      count++; 
    }
    
  }
}
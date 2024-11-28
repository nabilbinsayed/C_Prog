#include <stdio.h>
#include <ctype.h>

int main (void)

{
  char ch; 

  printf("Enter a character: ");
  scanf("%c", &ch);

  if(isalpha(ch)) {
    printf("\"%c\" is an alphabet\n", ch);
  }
    else if(isdigit(ch)) {
    printf("\"%c\" is a digit\n", ch);
  }
      else if(!isalnum(ch) && !isspace(ch)) {
    printf("\"%c\" is a special character\n", ch);
  }
        else {
    printf("\"%c\" is none\n", ch);
  }

  return 0; 
}
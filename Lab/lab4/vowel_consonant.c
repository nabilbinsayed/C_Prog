// Write a C program to input any alphabet and check      whether it is vowel or consonant.
#include <stdio.h>
#include <ctype.h>
int main(void) 
{
  char ch, ch2; 

  printf("Input any alphabet: ");
  scanf("%c", &ch);

  if (!isalpha(ch)) {
    printf("%c is not an alphabet\n", ch);
  }
  else {
    ch2=tolower(ch);

    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u') {
      printf("%c is a vowel\n", ch);
    }
    else {
      printf("%c is a consonant\n", ch);
    }

  }
  return 0; 
}
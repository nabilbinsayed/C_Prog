// Write a declaration of an array named weekend containing seven bool values. Include an
// initializer that makes the first and last values true; all other values should be false.

#include <stdbool.h>
#include <stdio.h>
int main()
{
  bool weekend[7] = {false, [0] = true, [6] = true};

  for(int i=0; i<7; i++) {
    if(weekend[i]) {
      printf("%d = true \n", i+1); 
    }
    else {
      printf("%d = false \n", i+1); 

    }
  }

  return 0;
}
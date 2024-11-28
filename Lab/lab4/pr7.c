#include <stdio.h>
int main (void)

{
  int x=100;
  printf("%d\n", 10 + x++); // Should print 10+100=110, as x is post-incremented and the current value of x remains to be 100 in this statement, but will increase to 101 next
  printf("%d\n", 10 + ++x); // Should print 10+102=112, as x was already 101 before and is now pre-incremented to 102
  return 0; 
}
#include <stdio.h>
int main (void)

{
  int x=5, y=10, z=10; 
  x=y==z;
  printf("%d", x);
  // the assignment operator "=" is right associative and has the lowest precedence is this statement. The relational operator "==" will check whether y and z is equal, and will store the value 1 if true and 0 if false. And then this 1 or 0 value will be stored into x. 
  // x=(y==z) is a better way of writing it
  // x=(1)
  // So it should print the value 1

  return 0; 
}
#include <math.h>
#include <stdio.h>
int main()
{
  int a;    // the below example shows that an int type is usually 32 bits. 

  
  // a = pow(2, 32);
  //   testing_range.c: In function 'main':
  // testing_range.c:6:7: warning: overflow in conversion from 'double' to 'int' changes value from '4.294967296e+9' to '2147483647' [-Woverflow]
  //     6 |   a = pow(2, 32);
  //       |       ^~~
  // 2147483647

  // printf("%d\n", a);

  printf("%d\n", pow(2, 31) - 1); // doesn't return correct values

  // The pow function returns a double, which can lead to precision issues when used with large integers. Additionally, the result of pow(2, 31) - 1 is a double and should be cast to an int to avoid warnings or potential issues.

  // Suggested change:

  // -   printf("%d\n", pow(2, 31) - 1);
  // +   printf("%d\n", (int)(pow(2, 31) - 1));

  printf("%d\n", (int)(pow(2, 31) - 1)); // correct

  a = pow(2, 31) - 1;

  printf("%d\n", a); // also correct

  return 0;
}
// #include <stdio.h>
// #include <math.h>
// #define PI acos(-1)

// int main(void)
// {
//   printf("%.20Lf\n", PI);

//   return 0;
// }



// #include <stdio.h>
// int main (void)
// {
//   int i=3, j=2;

//   if (i>j) {
//     return i;
//   }
//   else {
//     return j;
//   }
// }



// #include <stdio.h>
// int main(void)
// {
//   int i = 5, j = 10, k = 1;
//   printf("%d", k > i < j);

//   return 0;
// }



// #include <stdio.h>
// int main(void)

// {
//   int i = 2, j = 3;
//   int k = i * j == 6;
//   printf("%d", k);

//   return 0;
// }

#include <stdbool.h>
#include <stdio.h>
int main(void)

{
  int i = 3, j = 4, k = 5;
  int temp1;
  bool flag;

  temp1 = i % j + i < k;
  flag = temp1;

  if (flag) { // tests whether flag is 1
    printf("True\n");
  }
  else if (!flag) {
    printf("False\n");
  }

  return 0;
}
//         1
//       1   1
//     1   2   1
//   1   3   3   1
// 1   4   6   4   1

#include <stdio.h>
int main()
{
  int i, j, k, rows;
  int edge = 1;
  char gap = ' ';
  rows = 3;
  // printf("a%cb\n", gap);

  for(i=1; i<=rows; i++) {
    for(j=1; j<=2*i-1; j++) {
      if(j==1 || j==2*i-1) printf("1 "); 
        else if(j%2==0) printf("  "); 
    }
  }






  return 0;
}
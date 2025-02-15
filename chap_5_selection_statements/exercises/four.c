// Name:
// Date:
// Course/book:
// Section:
// Purpose:   Write a single expression whose value is either –1, 0, or +1, depending on whether i is less
//            than, equal to, or greater than j, respectively
// Note/Highlight:

#include <stdio.h>
int main(void)

{
  int i, j, k;

  printf("Enter two numbers: ");
  scanf("%d %d", &i, &j);

  k = i > j ? 1 : (i < j ? -1 : 0); // alt solution: (i > j) - (i < j) 

  switch (k) {
  case -1:
    printf("%d < %d\n", i, j);
    break;
  case 0:
    printf("%d = %d\n", i, j);
    break;
  case 1:
    printf("%d > %d\n", i, j);
    break;
  }

  // printf("%d\n", k);

  return 0;
}
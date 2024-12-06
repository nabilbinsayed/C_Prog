// Name:
// Date:
// Course/book:
// Section:
// Purpose:
// Note/Highlight:

// For each of the following pairs of scanf format strings, indicate whether or not the two
// strings are equivalent. If they’re not, show how they can be distinguished.
// (a) "%d" versus " %d"
// (b) "%d-%d-%d" versus "%d -%d -%d"
// (c) "%f" versus "%f "
// (d) "%f,%f" versus "%f, %f"

// do {
//   // code block to be executed
// }
// while (condition);

#include <stdio.h>
int main(void)

{
  int x;
  int a, b, c;

  printf("input some number: ");
  scanf("%d", &x);
  printf("the number is %d\n", x);

  printf("input some number: ");
  scanf("%d ", &x);
  // Waits for Non-Whitespace: The trailing space tells scanf to continue reading and discard any whitespace, but it blocks until a non-whitespace character is encountered.
  printf("the number is %d\n", x);

  // printf("input some number: ");
  // scanf(" %d", &x);
  // printf("the number is %d\n", x);

  // printf("input some number: ");
  // scanf(" %d", &x);
  // printf("the number is %d\n", x);

  // printf("input some number: ");
  // scanf(" %d", &x);
  // printf("the number is %d\n", x);

  // printf("input some number: ");
  // scanf("%d", &x);
  // printf("the number is %d\n", x);

  // printf("input some number: ");
  // scanf(" %d", &x);
  // printf("the number is %d\n", x);

  // printf("input some number: ");
  // scanf(" %d", &x);
  // printf("the number is %d\n", x);

  // printf("input some number: ");
  // scanf(" %d", &x);
  // printf("the number is %d\n", x);

  // printf("input some number: ");
  // scanf(" %d", &x);
  // printf("the number is %d\n", x);

  return 0;
}
#include <stdio.h>

void print_even(int x);

int main()
{
  int n = 20;
  for (int i = 1; i <= 20; i++) {
    print_even(i);
  }
}

void print_even(int x)
{
  if (x % 2 != 0) {
    return;
  }
  printf("%d ", x);
}
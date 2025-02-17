#include <stdio.h>

long long raise(int x, int n);

int main()
{
  int base, power;
  printf("Enter base and power: ");
  scanf("%d %d", &base, &power);

  if ((base == 0 && power == 0) || power < 0) {
    printf("Invalid input\n");
  }
  else {
    printf("(%d)^%d = %lld\n", base, power, raise(base, power));
  }

  return 0;
}

long long raise(int x, int n)
{
  if (n == 0) {
    return 1;
  }
  else {
    return x * raise(x, n - 1);
  }
}
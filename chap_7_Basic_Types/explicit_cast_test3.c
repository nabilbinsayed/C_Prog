#include <stdio.h>
int main()
{
  int a;
  long long c;
  scanf("%d", &a);

  c = a * a;

  printf("%lld\n", c); // malfunctions


  c = (long long)a * a;
  printf("%lld\n", c); // gives correct output


  return 0;
}
#include <stdio.h>

int factorial(int n)
{
  int i, n, fact = 1;
  for (i = n; i > 0; i--) {
    fact = fact * i;
  }
  return fact;
}

int main()
{
  int n, r, fact_n, fact_r, fact_nr, nCr;
  scanf("%d %d", &n, &r);
  fact_n = factorial(n);
  fact_r = factorial(r);
  fact_nr = factorial(n - r);

  nCr = fact_n / (fact_r * fact_nr);
  printf("%d\n", nCr);
}
}
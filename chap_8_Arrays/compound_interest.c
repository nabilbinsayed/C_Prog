// Our next program prints a table showing the value of $100 invested at different rates of interest over a period of years. The user will enter an interest rate and the number of years the money will be invested. The table will show the value of the money at one-year intervals—at that interest rate and the next four higher rates assuming that interest is compounded once a year. Here’s what a session with the program will look like:
// Enter interest rate: 6 Enter number of years: 5
// Years 6% 7% 8% 9% 10%
// Years    6%       7%       8%       9%       10%
// ------------------------------------------------
// 1      106.00   107.00   108.00   109.00   110.00
// 2      112.36   114.49   116.64   118.81   121.00
// 3      119.10   122.50   125.97   129.50   133.10
// 4      126.25   131.08   136.05   141.16   146.41
// 5      133.82   140.26   146.93   153.86   161.05

#include <math.h>
#include <stdio.h>
#define init 100

int main()
{
  int rate, year;
  int i, j;
  printf("Enter interest rate: ");
  scanf("%d", &rate);
  printf("Enter number of years: ");
  scanf("%d", &year);

  printf("Years \t\t");
  for (j = rate; j <= rate + 4; j++) {
    printf("%d%%\t", j);
  }
  printf("\n\n");

  for (i = 1; i <= year; i++) {
    printf("%d\t\t", i);
    for (j = rate; j <= rate + 4; j++) {
      printf("%.2f\t", init * pow((1 + (float)j / 100), i));
    }
    printf("\n");
  }

  return 0;
}

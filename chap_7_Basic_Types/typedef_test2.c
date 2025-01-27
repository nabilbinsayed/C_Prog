// #include <stdio.h>

// // Define Dollars type
// typedef float Dollars;
// // Define a format specifier macro for Dollars
// #define DF "%.2f"

// int main()
// {
//   Dollars cash_in = 123.45;
//   Dollars cash_out = 67.89;

//   printf("Cash In: " DF "\n", cash_in);
//   printf("Cash Out: " DF "\n", cash_out);

//   return 0;
// }



#include <stdio.h>

// Define Dollars type
typedef double Dollars;
// Define a format specifier macro for Dollars
#define DF "%.2lf"

int main()
{
  Dollars cash_in = 123.45;
  Dollars cash_out = 67.89;

  printf("Cash In: " DF "\n", cash_in);
  printf("Cash Out: " DF "\n", cash_out);

  return 0;
}

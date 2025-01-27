#include <stdio.h>
int main()
{
  int divisor, dividend;
  float quotient;
  scanf("%d %d", &dividend, &divisor);

  quotient = dividend / divisor;
  printf("%f\n", quotient); // ERROR! Gives 0 (first divides and gets an integer answer, then converts it to float)

  //  As it’s now written, the result of the division—an integer—will be converted to
  //  float form before being stored in quotient. We probably want dividend
  //  and divisor converted to float before the division, though, so that we get a
  //  more exact answer.

  quotient = (float)dividend / divisor;             // first converts to float then divides
  printf("%f\n", quotient);                         // correct output
  printf("%f\n", dividend / (float)divisor);        // correct output
  printf("%f\n", (float)dividend / (float)divisor); // correct output

  return 0;
}
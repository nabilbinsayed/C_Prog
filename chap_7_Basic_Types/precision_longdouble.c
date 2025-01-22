#include <stdio.h>
int main()
{
  long double huge = 1.234567890123456789L; // Test a fixed value
  printf("Precision test: %.20Lf\n", huge);
  return 0;
}

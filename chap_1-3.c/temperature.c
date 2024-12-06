// Name: temperature
// Date: 9.11.24
// Course/book: K.N. King
// Section: 2.6
// Purpose: coverting from farenheit to celsius
// Highlight: (5/9) becomes zero, (5.0f/9.0f) works

// #include <stdio.h>
// int main (void)

// {
//   float f;

//   printf("Enter Farenheit temperature: ");
//   scanf("%f", &f);
//   printf("%.2f F in farenheit is %.2f degree celsius\n", f, (5/9)*(f-32));

//   // prints 0 as it considers 5/9 to be 0

//   // Defining SCALE_FACTOR to be (5.0f / 9.0f) instead of (5 / 9) is important, because C truncates the result when two integers are divided. The value of (5 / 9) would be 0, which definitely isn’t what we want.

//   return 0;
// }

// #include <stdio.h>
// int main (void)

// {
//   float f, c;

//   printf("Enter Farenheit temperature: ");
//   scanf("%f", &f);
//   c=(5/9)*(f-32); // doesn't work either
//   printf("%.2f F in farenheit is %.2f degree celsius\n", f, c);

//   return 0;
// }

// #include <stdio.h>
// int main (void)

// {
//   float f;

//   printf("Enter Farenheit temperature: ");
//   scanf("%f", &f);
//   printf("%.2f F in farenheit is %.2f degree celsius\n", f, (5.0f/9.0f)*(f-32)); // works

//   return 0;
// }

#include <stdio.h>
int main(void)

{
  float f, c;

  printf("Enter Farenheit temperature: ");
  scanf("%f", &f);
  c = (5 * f - 160) / 9.0f;
  printf("%.2f F in farenheit is %.2f degree celsius\n", f, c); // works as well

  return 0;
}
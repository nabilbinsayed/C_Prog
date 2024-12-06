/*
* Name: variable
* Course/Book: KN King
* Section: 2.6
* Purpose: Macro Definition
* Note: I was having a hard time compiling this file because i named it macro definition (2.6).c; but turns out i can't put spaces or special characters inside.
// Tips for File Naming in C
// Avoid spaces: Use underscores _ or hyphens - instead.
// Avoid special characters: Stick to letters, numbers, and underscores.
// Keep it short and descriptive: This minimizes the chance of errors across different systems and environments.
*/

// #include <stdio.h>
// #define PI 3.1416
// int main (void)

// {
//   float r;
//   printf("Give radius of a circle: ");
//   scanf("%f", r);
//   printf("The area of the circle is: %.3f\n", PI*r*r);

// wont compile correctly because i forgot the &r in scanf

//   return 0;
// }

// #include <stdio.h>
// #define PI 3.1416

// int main(void)
// {
//     float r, area;
//     area = PI * r * r;  // This won't give the correct answer as the 'r' is taken as 0

//     printf("Give radius of a circle: ");
//     scanf("%f", &r);  // Corrected: added & symbol before r

//     printf("The area of the circle is: %.3f\n", area);

//     return 0;
// }

#include <stdio.h>
#define PI 3.1416

int main(void)
{
    float r, area;

    printf("Give radius of a circle: ");
    scanf("%f", &r); // Corrected: added & symbol before r

    area = PI * r * r; // Declared after getting radius input

    printf("The area of the circle is: %.3f\n", area);

    return 0;
}

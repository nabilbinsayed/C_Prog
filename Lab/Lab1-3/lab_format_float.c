#include <stdio.h>

int main() {
    float num1, num2;
    double num3;

    // Prompt the user to input floating-point numbers
    printf("Enter a floating-point number (float type): ");
    scanf("%f", &num1);

    printf("Enter another floating-point number (float type): ");
    scanf("%f", &num2);

    printf("Enter a double-precision floating-point number: ");
    scanf("%lf", &num3); // Use %lf for double input

    // Output the floating-point numbers with different formats
    printf("\nFormatted Output:\n");

    // Default float output
    printf("Default format (num1): %f\n", num1);

    // Fixed-point notation
    printf("Fixed-point (2 decimal places, num1): %.2f\n", num1);

    // Scientific notation
    printf("Scientific notation (num1): %e\n", num1);

    // Exponential notation
    printf("Exponential notation (num2): %E\n", num2);

    // Using width and precision
    printf("Width 10, 3 decimal places (num2): %10.3f\n", num2);

    // Double precision
    printf("Default double format (num3): %lf\n", num3);

    // Double in scientific notation
    printf("Double scientific notation (num3): %le\n", num3);

    return 0;
}

#include <stdio.h>

int main() {
    int total_days, years, months, days;

    // Input the total number of days
    printf("Enter the total number of days: ");
    scanf("%d", &total_days);

    // Calculate years, months, and remaining days
    years = total_days / 365;         // 1 year = 365 days
    total_days %= 365;               // Remaining days after calculating years
    months = total_days / 30;        // 1 month = 30 days (approximation)
    days = total_days % 30;          // Remaining days after calculating months

    // Display the result
    printf("Equivalent time: %d years, %d months, and %d days\n", years, months, days);

    return 0;
}

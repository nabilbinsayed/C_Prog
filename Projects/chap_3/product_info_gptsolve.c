#include <stdio.h>

int main() {
    int item_number;
    float unit_price;
    char purchase_date[11]; // mm/dd/yyyy format needs 10 characters + 1 for null terminator

    // Input product information
    printf("Enter item number: ");
    scanf("%d", &item_number);
    printf("Enter unit price: ");
    scanf("%f", &unit_price);
    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%s", purchase_date);

    // Print formatted output
    printf("\nItem\t\tUnit Price\tPurchase Date\n");
    printf("%-10d\t$%7.2f\t%s\n", item_number, unit_price, purchase_date);

    return 0;
}

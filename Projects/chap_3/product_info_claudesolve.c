#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to clear input buffer
void clearInputBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main() {
    int item_number;
    float unit_price;
    char date[11];  // mm/dd/yyyy\0
    int valid_input;

    // Get item number
    do {
        printf("Enter item number: ");
        valid_input = scanf("%d", &item_number);
        clearInputBuffer();
        
        if (!valid_input || item_number < 0 || item_number > 9999) {
            printf("Please enter a valid item number between 0 and 9999\n");
            valid_input = 0;
        }
    } while (!valid_input);

    // Get unit price
    do {
        printf("Enter unit price: ");
        valid_input = scanf("%f", &unit_price);
        clearInputBuffer();
        
        if (!valid_input || unit_price < 0 || unit_price > 9999.99) {
            printf("Please enter a valid price between $0 and $9999.99\n");
            valid_input = 0;
        }
    } while (!valid_input);

    // Get purchase date
    do {
        printf("Enter purchase date (mm/dd/yyyy): ");
        if (fgets(date, sizeof(date), stdin) != NULL) {
            // Remove newline if present
            date[strcspn(date, "\n")] = 0;
            
            // Basic date validation (check format length)
            if (strlen(date) == 10 && 
                date[2] == '/' && 
                date[5] == '/') {
                valid_input = 1;
            } else {
                printf("Please use the format mm/dd/yyyy\n");
                valid_input = 0;
            }
        }
    } while (!valid_input);

    // Print header
    printf("\nItem\t\tUnit\t\tPurchase\n");
    printf("\t\tPrice\t\tDate\n");

    // Print formatted data
    // %-8d: left-justified item number with width 8
    // %8.2f: right-justified price with width 8 and 2 decimal places
    // %-10s: left-justified date with width 10
    printf("%-8d\t$ %7.2f\t%s\n", item_number, unit_price, date);

    return 0;
}
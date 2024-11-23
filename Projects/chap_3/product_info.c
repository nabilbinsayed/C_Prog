// Name: 
// Date: 
// Course/book: 
// Section: 
// Purpose: 

  // Write a program that formats product information entered by the user. A session with the
  // program should look like this:
  // Enter item number: 583
  // Enter unit price: 13.5
  // Enter purchase date (mm/dd/yyyy): 10/24/2010
  // Item   Unit    Purchase
  //        Price   Date
  // 583    $13.50  10/24/2010
  // The item number and date should be left justified; the unit price should be right justified.
  // Allow dollar amounts up to $9999.99. Hint: Use tabs to line up the columns.

// Note/Highlight: 

#include <stdio.h>
#include <stddef.h>
int main (void)

{
  int m, d, y, item; 
  float price; 

  printf("Enter item number: ");
  scanf("%d", &item);
  printf("Enter unit price: ");
  scanf("%f", &price);

  printf("Enter purchase date(mm/dd/yyyy): ");
  scanf("%d/%d/%d", &m, &d, &y);

  printf("Item\t\tUnit\t\tPurchase\n\t\tPrice\t\tDate\n%d\t\t$%-.2f\t\t%d/%d/%d", item, price, m, d, y);

  

 


  return 0; 
}
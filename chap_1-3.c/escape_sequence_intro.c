// Name:
// Date:
// Course/book:
// Section:
// Purpose: try random escape sequences
// Note/Highlight:

// Alert (bell) \a
// Backspace \b
// New line \n
// Horizontal tab \t

// Another common escape sequence is (\"), which represents the (") character.
// Since the " character marks the beginning and end of a string, it can’t appear within a string without the use of this escape sequence.

// Incidentally, you can’t just put a single \ character in a string; the compiler will assume that it’s the beginning of an escape sequence. To print a single \ character, put two \ characters in the string

#include <stdio.h>
int main(void)

{

  printf("Item\tUnit\tPurchase\n\tPrice\tDate\n");

  printf("\"Hello, world\"");
  // prints "Hello, world"
  // (\") equals (")

  printf("\n\\"); // (\\) prints a single (\)

  return 0;
}
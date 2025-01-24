

#include <stdio.h>
int main()
{
  char ch, ch2;

  printf("Enter a line of text: "); 

  while (1) {
    ch = getchar(); // Read the first character
    if (ch == '\n') {
      break; // Exit the loop if the newline character is encountered
    }

    else if (ch == ' ') {
      while ((ch = getchar()) == ' ') // Skip over any additional spaces
        ;
    }

    while (ch != ' ' && ch != '\n') {
      putchar(ch); // Print the character
      ch = getchar(); // Read the next character
    }
  }

  printf("End\n");

  return 0;
}
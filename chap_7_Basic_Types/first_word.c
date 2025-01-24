#include <stdio.h>
int main()
{
  char ch;
  printf("Enter a sentence: ");

  while (1) {
    scanf("%c", &ch);
    if (ch == ' ' || ch == '\n') {
      break;
    }
    printf("%c", ch);
  }

  do {
    scanf("%c", &ch);
  } while (ch != '\n');

  // কমেন্ট আউট করলে ch == ' ' এ প্রোগ্রাম ব্রেক হয়ে যায়, পুরো লাইন রিড করে না। 


  printf("%c", ch); 
  printf("Program completed\n");

  return 0;
}
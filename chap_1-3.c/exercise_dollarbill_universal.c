#include <stdio.h>
int main(void)

// Using the modulus operator would've made it easier

{
  int ori1000, ori500, ori200, ori100, ori50, ori20, ori10, ori5, ori2, ori1;

  printf("Enter the bill: ");
  scanf("%d", &ori1000);

  ori500 = ori1000 - 1000 * (ori1000 / 1000);
  ori200 = ori500 - 500 * (ori500 / 500);
  ori100 = ori200 - 200 * (ori200 / 200);
  ori50 = ori100 - 100 * (ori100 / 100);
  ori20 = ori50 - 50 * (ori50 / 50);
  ori10 = ori20 - 20 * (ori20 / 20);
  ori5 = ori10 - 10 * (ori10 / 10);
  ori2 = ori5 - 5 * (ori5 / 5);
  ori1 = ori2 - 2 * (ori2 / 2);

  printf("1000 dollar bills: %d \n 500 dollar bills: %d \n 200 dollar bills: %d \n 100 dollar bills: %d \n 50 dollar bills: %d \n 20 dollar bills: %d \n 10 dollar bills: %d \n 5 dollar bills: %d \n 2 dollar bills: %d \n 1 dollar bills: %d \n ", ori1000 / 1000, ori500 / 500, ori200 / 200, ori100 / 100, ori50 / 50, ori20 / 20, ori10 / 10, ori5 / 5, ori2 / 2, ori1);

  return 0;
}
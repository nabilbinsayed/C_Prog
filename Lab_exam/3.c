#include <stdio.h>

int main()
{
  int dec, oct = 0, i = 1;
  scanf("%d", &dec);

  int temp = dec;
  while (temp != 0) {
    oct += (temp % 8) * i;
    temp /= 8;
    i *= 10;
  }

  printf("Octal equivalent: %d\n", oct);
  return 0;
}

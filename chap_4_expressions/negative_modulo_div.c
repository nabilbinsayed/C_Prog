#include <stdio.h>
int main (void)

// Describing the result when / and % are used with negative operands is tricky.
// The C89 standard states that if either operand is negative, the result of a division can be rounded either up or down. (For example, the value of -9 / 7
// could be either –1 or –2). If i or j is negative, the sign of i % j in C89
// depends on the implementation. (For example, the value of -9 % 7 could be
// either –2 or 5). In C99, on the other hand, the result of a division is always
// truncated toward zero (so -9 / 7 has the value –1) and the value of i % j has
// the same sign as i (hence the value of -9 % 7 is –2)




// Q: Why are the rules for using the / and % operators with negative operands so
// complicated? [p. 54]
// A: The rules aren’t as complicated as they may first appear. In both C89 and C99, the
// goal is to ensure that the value of (a / b) * b + a % b will always be equal to a

// (and indeed, both standards guarantee that this is the case, provided that the value
// of a / b is “representable”). The problem is that there are two ways for a / b and
// a % b to satisfy this equality if either a or b is negative, as seen in C89, where
// either -9 / 7 is –1 and -9 % 7 is –2, or -9 / 7 is –2 and -9 % 7 is 5. In the first
// case, (-9 / 7) * 7 + -9 % 7 has the value –1 × 7 + –2 = –9, and in the second
// case, (-9 / 7) * 7 + -9 % 7 has the value –2 × 7 + 5 = –9. By the time C99 rolled
// around, most CPUs were designed to truncate the result of division toward zero, so
// this was written into the standard as the only allowable outcome

{
  int a, b; 
  a=4, b=-3; 

  printf("%d\n", a/b); // will print -1 (not -2), a/b is always truncated towards zero in C99

  printf("%d\n", a%b); // will print +1, as it always takes the sign of first operand (a)

  printf("%d\n", -4%3); // will print -1 for said reason above




  return 0; 
}
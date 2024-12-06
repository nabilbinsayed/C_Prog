// Name:
// Date:
// Course/book:
// Section:
// Purpose:
// Note/Highlight:

#include <stdio.h>
int main(void)

{
  int i = 0;
  int j = 2, k;

  k = (i != 0) && (j / i > 0); // আই নন জিরো এই স্টেটমেন্ট ফলস, তাই ভ্যালু জিরো, এটার সাথে যা খুশি এন্ড করি আন্সার জিরো হবে, তাই ডানপাশের এক্সপ্রেশন ইভ্যালুয়েট করার দরকার ই পড়বে না, এরর ও দেখাবে না।

  printf("%d\n", k);

  return 0;
}
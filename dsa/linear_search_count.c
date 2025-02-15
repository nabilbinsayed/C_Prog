#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#define size_a (int)sizeof(a) / sizeof(a[0])

int main()
{
  int a[] = {1, 0, 2, 4, 5, 9, 4, 1, 2, 0, 4, 5, 5};
  int a_saved[size_a];
  bool pos[size_a] = {false};
  int position;
  int count = 0;
  bool flag = false;
  int target;

  memcpy(a_saved, a, sizeof(a_saved)); 
  // for (int i = 0; i < size_a; i++) {
  //   a_saved[i] = a[i];
  // }

  printf("The original array (%d members): ", size_a);

  for (int i = 0; i < size_a; i++) {
    printf("%d ", a_saved[i]);
  }

  printf("\nEnter target integer: ");
  scanf("%d", &target);

  for (int i = 0; i < size_a; i++) {
    if (a[i] == target) {
      flag = true;
      pos[i] = true;
      count++;
    }
  }

  if (flag) {
    printf("%d found %d times, in position ", target, count);
    for (int i = 0; i < size_a; i++) {
      if (pos[i]) {
        if (count > 1) {
          printf("%d, ", i + 1); // what a clever solution by gpt, was having trouble with handling comma
          count--;
        }
        else {
          printf("%d", i + 1);
        }
      }
    }
  }
  else {
    printf("%d not found\n", target);
  }

  return 0;
}
#include <stdbool.h>
#include <stdio.h>
#define size_a (int)sizeof(a) / sizeof(a[0])

int main()
{
  int a[] = {1, 0, 2, 4, 5, 9, 4, 1};
  int a_saved[size_a]; 
  int position;
  bool flag = false;
  int target;

  for (int i = 0; i < size_a; i++) {
    a_saved[i] = a[i];
  }

  printf("The original array (%d members): ", size_a);

  for (int i = 0; i < size_a; i++) {
    printf("%d ", a_saved[i]);
  }

  printf("\nEnter target integer: ");
  scanf("%d", &target);

  for (int i = 0; i < size_a; i++) {
    if (a[i] == target) {
      flag = true;
      position = i;
      break;
    }
  }

  if (flag) {
    printf("%d found in position %d\n", target, position+1);
  }
  else {
    printf("%d not found\n", target);
  }

  return 0;
}
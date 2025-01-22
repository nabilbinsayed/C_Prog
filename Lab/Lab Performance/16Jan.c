#include <stdio.h>
#include <string.h>
int main()
{
  int M = 10, N = 2;
  int i, j, k;
  int count = 0;
  int index[M];
  memset(index, -1, sizeof(index)); // Initialize index array with -1
  char str1[M], str2[N];

  printf("Enter elements of first string: ");
  for (i = 0; i < M; i++) {
    scanf(" %c", &str1[i]);
  }
  printf("Enter elements of second string: ");
  for (i = 0; i < N; i++) {
    scanf(" %c", &str2[i]);
  }

  for (i = 0; i < M; i++) {
    for (j = 0; j < N; j++) {
      if (str1[i] == str2[j]) {
        for (k = 0; k < N && (i + k) < M; k++) {
          if (str1[i + k] != str2[k]) {
            break;
          }
        }
        if (k == N) {
          index[count++] = i; // Store the starting index of the match
        }
      }
    }
  }

  printf("count = %d\n", count);
  printf("Index = ");
  for (i = 0; i < count; i++) {
    printf("%d ", index[i]);
  }
  printf("\n");
  return 0;
}
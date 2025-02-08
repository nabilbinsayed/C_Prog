// ### **Question:**
// Write a **C program** to implement **Bubble Sort**. Your program should take an aay of integers as input and sort them in **ascending order** using the **Bubble Sort** algorithm.

// ### **Explanation of Bubble Sort:**
// Bubble Sort is a simple sorting algorithm that repeatedly **compares adjacent elements** in the array and **swaps them** if they are in the wrong order. This process continues until the array is fully sorted.

// The algorithm works as follows:
// 1. Start from the **first element** and compare it with the next element.
// 2. If the first element is **greater** than the second, **swap** them.
// 3. Move to the next pair of adjacent elements and **repeat the process** until the last element is reached.
// 4. After the first pass, the **largest element is placed at the end** of the array.
// 5. Repeat the process for the remaining elements, reducing the comparison range by one each time.
// 6. Continue until no swaps are needed, meaning the array is sorted.

// ### **Example Walkthrough:**
// #### Given Array: `[5, 3, 8, 4, 2]`
// **Pass 1:**
// - Compare `5` and `3` → Swap → `[3, 5, 8, 4, 2]`
// - Compare `5` and `8` → No Swap → `[3, 5, 8, 4, 2]`
// - Compare `8` and `4` → Swap → `[3, 5, 4, 8, 2]`
// - Compare `8` and `2` → Swap → `[3, 5, 4, 2, 8]`
// *(Largest element `8` is now at the last position.)*

// **Pass 2:**
// - Compare `3` and `5` → No Swap → `[3, 5, 4, 2, 8]`
// - Compare `5` and `4` → Swap → `[3, 4, 5, 2, 8]`
// - Compare `5` and `2` → Swap → `[3, 4, 2, 5, 8]`
// *(Second largest element `5` is now at the second last position.)*

// **Pass 3:**
// - Compare `3` and `4` → No Swap → `[3, 4, 2, 5, 8]`
// - Compare `4` and `2` → Swap → `[3, 2, 4, 5, 8]`

// **Pass 4:**
// - Compare `3` and `2` → Swap → `[2, 3, 4, 5, 8]`

// Now the array is fully sorted: **`[2, 3, 4, 5, 8]`**

// ### **Constraints:**
// - You **must** use Bubble Sort, not built-in sorting functions.
// - The program should take input dynamically (user-defined array size).
// - The sorting should be done **in-place** (modifying the original array).

#include <stdio.h>
#define size (int)sizeof(arr) / sizeof(arr[0])
int main()
{
  int arr[] = {2, 6, 5, 1, 3, 9, 11, 13, 12, 4, 3, 1, 2};
  int arr_sorted[size];
  int count, temp;
  while (1) {
    count = 0;
    for (int i = 0; i < size - 1; i++) {
      if (arr[i] > arr[i + 1]) {
        temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
        count++;
      }
    }
    if (count == 0) {
      break;
    }
  }

  for (int j = 0; j < size; j++) {
    printf("%d ", arr[j]);
  }

  return 0;
}
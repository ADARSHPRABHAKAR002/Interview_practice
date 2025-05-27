// Dynamic memory allocation in C involves managing memory during runtime, allowing for flexible memory usage as needed. It uses functions from the stdlib.h
// library to allocate and deallocate memory on the heap. The primary functions are malloc(), calloc(), realloc(), and free().

// malloc():
// Allocates a block of memory of a specified size (in bytes) and returns a pointer to the beginning of the allocated block. The memory is not initialized.
// calloc():
// Allocates a block of memory for an array of elements, initializing all bits in the allocated memory to zero.
// realloc():
// Resizes a previously allocated block of memory, potentially moving it to a new location if necessary. It preserves the content of the original block up to the smaller of the old and new sizes.
// free():
// Deallocates a previously allocated block of memory, making it available for future allocations.

#include <stdio.h>
#include <stdlib.h>

int main() {
  int *arr;
  int n = 5;

  // Allocate memory for 5 integers using malloc
  arr = (int *)malloc(n * sizeof(int));
  if (arr == NULL) {
    printf("Memory allocation failed\n");
    return 1;
  }

  // Initialize and print the array
  printf("Array elements (malloc):\n");
  for (int i = 0; i < n; i++) {
    arr[i] = i + 1;
    printf("%d ", arr[i]);
  }
  printf("\n");

  // Resize the array using realloc
  n = 10;
  arr = (int *)realloc(arr, n * sizeof(int));
  if (arr == NULL) {
    printf("Memory reallocation failed\n");
    return 1;
  }

    // Initialize and print the resized array
  printf("Resized array elements (realloc):\n");
  for (int i = 5; i < n; i++) {
    arr[i] = i + 1;
  }
    for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  // Free the allocated memory
  free(arr);
  arr = NULL; // set to NULL after freeing, good practice

  return 0;
}
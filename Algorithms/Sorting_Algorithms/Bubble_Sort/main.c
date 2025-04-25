// Sorting algorithms are fundamental in computer science and are widely used in various applications to arrange data in a specific order.
// Below is a detailed explanation of some commonly used sorting algorithms in C, including their implementation and characteristics.

// 1. Bubble Sort

// Bubble Sort is a simple sorting algorithm that repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order.
// The process is repeated until the list is sorted.

// Characteristics:

// Time Complexity:
//      Best Case: O(n) (when the array is already sorted)
//      Worst Case: O(n²)
// Space Complexity: O(1) (in-place sorting)
// Stability: Stable (preserves the relative order of equal elements)

#include <stdio.h>

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, n);
    printf("Sorted array: ");
    printArray(arr, n);
    return 0;
}

// 3. Insertion Sort

// Insertion Sort builds the sorted array one element at a time by repeatedly moving an element to its correct position within the sorted part of the array.


// Characteristics:

// Time Complexity:
//      Best Case: O(n) (when the array is already sorted)
//      Worst Case: O(n²)
// Space Complexity: O(1) (in-place sorting)
// Stability: Stable

#include <stdio.h>

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        // Move elements of arr[0..i-1] that are greater than key
        // to one position ahead of their current position
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    insertionSort(arr, n);
    printf("Sorted array: ");
    printArray(arr, n);
    return 0;
}

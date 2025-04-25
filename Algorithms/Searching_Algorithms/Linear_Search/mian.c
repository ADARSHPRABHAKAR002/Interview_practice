// Searching algorithms in C are used to find specific elements in a given dataset, such as an array, list, or database. They are fundamental in computer science and are widely used in various applications.
// Below is an explanation of common searching algorithms in C, including their implementation and characteristics.


// Types of Searching Algorithms

// Linear Search
// Binary Search
// Ternary Search
// Jump Search
// Exponential Search

// 1. Linear Search

// Linear Search is the simplest searching algorithm that checks each element one by one until the desired element is found or the end of the array is reached.


// Characteristics:

// Time Complexity:
//      Best Case: O(1) (element is at the first position)
//      Worst Case: O(n) (element is not found or at the last position)
// Space Complexity: O(1)
// Works on: Unsorted or sorted data.

#include <stdio.h>

int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i;  // Return index if key is found
        }
    }
    return -1;  // Return -1 if key is not found
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 30;

    int result = linearSearch(arr, n, key);
    if (result != -1) {
        printf("Element found at index %d\n", result);
    } else {
        printf("Element not found\n");
    }
    return 0;
}

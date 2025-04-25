// 5. Exponential Search


// Exponential Search is used when the target element is near the start of the array. It works by doubling the range and then performing binary search within the range.


// Characteristics:

// Time Complexity:
//         Best Case: O(1)
//         Worst Case: O(log n)
// Space Complexity: O(1)
// Works on: Sorted data only.

#include <stdio.h>

int binarySearch(int arr[], int left, int right, int key) {
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == key) {
            return mid;
        }
        if (arr[mid] < key) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}

int exponentialSearch(int arr[], int n, int key) {
    if (arr[0] == key) {
        return 0;
    }
    int i = 1;
    while (i < n && arr[i] <= key) {
        i = i * 2;
    }
    return binarySearch(arr, i / 2, (i < n ? i : n - 1), key);
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 20;

    int result = exponentialSearch(arr, n, key);
    if (result != -1) {
        printf("Element found at index %d\n", result);
    } else {
        printf("Element not found\n");
    }
    return 0;
}

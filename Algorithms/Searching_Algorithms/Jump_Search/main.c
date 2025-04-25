// 4. Jump Search

// Jump Search works on sorted data and divides the data into blocks of fixed size. It jumps by the block size and then performs a linear search within the block.


// Characteristics:

// Time Complexity:
//         Best Case: O(1)
//         Worst Case: O(√n)
// Space Complexity: O(1)
// Works on: Sorted data only.

#include <stdio.h>
#include <math.h>

int jumpSearch(int arr[], int n, int key) {
    int step = sqrt(n);  // Block size
    int prev = 0;

    // Jump blocks
    while (arr[prev] < key && prev < n) {
        if (arr[step - 1] >= key) {
            break;
        }
        prev = step;
        step += sqrt(n);
        if (prev >= n) {
            return -1;
        }
    }

    // Perform linear search within the block
    for (int i = prev; i < step && i < n; i++) {
        if (arr[i] == key) {
            return i;
        }
    }

    return -1;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 40;

    int result = jumpSearch(arr, n, key);
    if (result != -1) {
        printf("Element found at index %d\n", result);
    } else {
        printf("Element not found\n");
    }
    return 0;
}

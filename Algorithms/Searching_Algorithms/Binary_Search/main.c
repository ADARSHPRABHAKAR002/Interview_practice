
// 2. Binary Search

// Binary Search is a more efficient algorithm that repeatedly divides the search interval in half and checks the middle element. It works only on sorted data.


// Characteristics:

// Time Complexity:
// Best Case: O(1) (element is at the middle)
// Worst Case: O(log n)
// Space Complexity: O(1) (iterative) or O(log n) (recursive).
// Works on: Sorted data only.


#include<stdio.h>

int binarySearch(int arr[], int n, int key){
    int left = 0, right = n - 1;
    while(left <= right){
        int mid = left +(right - left) / 2;

        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid] < key){
            left = mid + 1;
        }
        else{
            right = mid - 1;
        }
    }
    return -1;
}


int main(){
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr) / sizeof(arr[0]);

    int key = 4;
    int result = binarySearch(arr, n, key);
    if(result != -1){
        printf("Element found at index %d\n",result);
    }
    else{
        printf("Element not found\n");

    }
    return 0;
}


// ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------

// Implementation (Recursive):

#include <stdio.h>

int binarySearchRecursive(int arr[], int left, int right, int key) {
    if (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == key) {
            return mid;  // Key found at index mid
        } else if (arr[mid] < key) {
            return binarySearchRecursive(arr, mid + 1, right, key);
        } else {
            return binarySearchRecursive(arr, left, mid - 1, key);
        }
    }
    return -1;  // Key not found
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 50;

    int result = binarySearchRecursive(arr, 0, n - 1, key);
    if (result != -1) {
        printf("Element found at index %d\n", result);
    } else {
        printf("Element not found\n");
    }
    return 0;
}

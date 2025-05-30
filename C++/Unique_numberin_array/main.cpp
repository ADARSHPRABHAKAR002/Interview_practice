#include <iostream>

int findUniqueNumber(int arr[], int n) {
    int result = 0;
    for (int i = 0; i < n; i++) {
        result ^= arr[i];
    }
    return result;
}

int main() {
    int arr[] = {2, 3, 5, 4, 5, 3, 4, 2, -1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int uniqueNumber = findUniqueNumber(arr, n);
    std::cout << "Unique number: " << uniqueNumber << std::endl;
    return 0;
}

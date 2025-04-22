// 2. Pass by Reference

// In pass by reference, the function is given an address (or reference) to the actual variable. This allows the function to directly modify the original variable in the calling scope.


// Key Characteristics:

// Reference to Data: The function operates on the original variable via its memory address.
// Original Variable Modified: Changes inside the function affect the original variable.
// Faster for Large Data: Since only the address is passed, it's more efficient for large data structures.

#include <stdio.h>

void modifyValueReference(int* x) {
    *x = *x * 2;  // Dereference the pointer and modify the actual value
    printf("Inside modifyValueReference: *x = %d\n", *x);
}

int main() {
    int a = 10;
    printf("Before modifyValueReference: a = %d\n", a);
    modifyValueReference(&a);  // Pass by reference (passing the address of 'a')
    printf("After modifyValueReference: a = %d\n", a);  // Original 'a' is modified
    return 0;
}


// Special Case: Arrays in C

// In C, arrays are always passed by reference because the name of the array is a pointer to its first element. So, any modifications to an array within a function affect the original array.

// #include <stdio.h>

// void modifyArray(int arr[], int size) {
//     for (int i = 0; i < size; i++) {
//         arr[i] *= 2;  // Modify the original array
//     }
// }

// int main() {
//     int numbers[] = {1, 2, 3, 4, 5};
//     int size = sizeof(numbers) / sizeof(numbers[0]);

//     printf("Before modifyArray: ");
//     for (int i = 0; i < size; i++) {
//         printf("%d ", numbers[i]);
//     }
//     printf("\n");

//     modifyArray(numbers, size);

//     printf("After modifyArray: ");
//     for (int i = 0; i < size; i++) {
//         printf("%d ", numbers[i]);
//     }
//     printf("\n");

//     return 0;
// }

// Before modifyArray: 1 2 3 4 5
// After modifyArray: 2 4 6 8 10
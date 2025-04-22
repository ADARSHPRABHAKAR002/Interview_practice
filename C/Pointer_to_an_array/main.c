// 2. Pointer to an Array

// A pointer to an array is a single pointer that points to the entire array. In other words, it stores the address of the first element of the array, and this pointer treats the entire array as a single unit.


// Key Characteristics:

// The pointer points to the entire array, not just an individual element.
// You can access the elements of the array using this pointer.

#include<stdio.h>
int main()
{
    int arr[] = {1,2,3,4,5,6};
    int(*ptr)[6] = &arr;

    for(int i=0;i<6;i++){
        printf("%d",(*ptr)[i]);
    }
    return 0;
}


// Use Case:

// Useful in multi-dimensional arrays, where you need to pass the address of entire rows/columns to functions.
// Helps in working with arrays in scenarios where the size of the array is fixed and known at compile time.
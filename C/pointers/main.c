// In C, pointers are one of the most powerful features. A pointer is a variable that stores the memory address of another variable.
// Pointers allow for efficient memory management, dynamic memory allocation, and complex data structures like linked lists and trees.

// 1. Null Pointer

// A pointer that does not point to any valid memory location is called a null pointer.
// It is initialized with the constant NULL (defined in <stddef.h> or <stdio.h>), which is typically represented as ((void*)0) or 0.

#include <stdio.h>

int main() {
    int *ptr = NULL;  // Null pointer
    if (ptr == NULL) {
        printf("Pointer is NULL\n");
    }
    return 0;
}
// Key Points:

// A null pointer is useful for checking whether a pointer has been initialized or not.
// Dereferencing a null pointer causes undefined behavior (typically results in a segmentation fault).

//---------------------------------------------------------------------------------------------------------------------------------------

// 2. Void Pointer

// A void pointer (void*) is a generic pointer that can point to any data type.
// It does not have a specific data type, so it cannot be dereferenced directly

// #include <stdio.h>

// int main() {
//     int a = 10;
//     float b = 5.5;

//     void *ptr;  // Void pointer
//     ptr = &a;
//     printf("Value of a: %d\n", *(int *)ptr);  // Cast to int* before dereferencing

//     ptr = &b;
//     printf("Value of b: %.2f\n", *(float *)ptr);  // Cast to float* before dereferencing

//     return 0;
// }

// Key Points:

// Must be typecast to the appropriate type before dereferencing.
// Useful for writing generic functions or data structures (e.g., in dynamic memory management).

//----------------------------------------------------------------------------------------------------------------------------------

// 3. Wild Pointer

// A wild pointer is an uninitialized pointer that points to a random or unknown memory location.
// Using a wild pointer can cause unpredictable behavior or crashes.

// #include <stdio.h>

// int main() {
//     int *ptr;  // Wild pointer (uninitialized)
//     // printf("%d", *ptr);  // Dereferencing here is dangerous
//     return 0;
// }

// Key Points:

// Always initialize a pointer before using it (e.g., set it to NULL or point it to a valid memory location).
// Dereferencing a wild pointer results in undefined behavior.

//----------------------------------------------------------------------------------------------------------------------------------

// 4. Dangling Pointer

// A dangling pointer is a pointer that points to memory that has been deallocated or is no longer valid.
// For example, this can occur after freeing dynamically allocated memory or after a local variable goes out of scope.

// #include <stdio.h>
// #include <stdlib.h>

// int* danglingPointer() {
//     int x = 10;  // Local variable
//     return &x;   // Returning address of a local variable
// }

// int main() {
//     int *ptr = danglingPointer();  // Dangling pointer
//     // printf("%d\n", *ptr);  // Dereferencing ptr is undefined behavior

//     int *p = (int *)malloc(sizeof(int));
//     free(p);  // p becomes a dangling pointer
//     return 0;
// }

// Key Points:

// Avoid returning the address of local variables.
// Set pointers to NULL after freeing memory.

//----------------------------------------------------------------------------------------------------------------------------------

// 5. Function Pointer

// A function pointer is a pointer that stores the address of a function, allowing for indirect function calls.
// Useful for callbacks, implementing dynamic behavior, and creating function tables.

// #include <stdio.h>

// void greet() {
//     printf("Hello, World!\n");
// }

// void farewell() {
//     printf("Goodbye, World!\n");
// }

// int main() {
//     void (*funcPtr)();  // Function pointer
//     funcPtr = &greet;
//     funcPtr();  // Calls greet()

//     funcPtr = &farewell;
//     funcPtr();  // Calls farewell()

//     return 0;
// }

// Key Points:

// Syntax: return_type (*pointer_name)(parameter_list);
// Function pointers are extensively used in systems programming and callbacks.

//----------------------------------------------------------------------------------------------------------------------------------

// 6. Array of Pointers

// An array of pointers is an array where each element is a pointer to a variable or memory location.

// #include <stdio.h>

// int main() {
//     const char *fruits[] = {"Apple", "Banana", "Cherry"};  // Array of pointers to strings

//     for (int i = 0; i < 3; i++) {
//         printf("%s\n", fruits[i]);
//     }

//     return 0;
// }

// Key Points:

// Useful for managing collections of strings or objects.
// Each element in the array points to a separate memory location.

//----------------------------------------------------------------------------------------------------------------------------------


// 7. Pointer to an Array

// A pointer to an array points to the entire array rather than a single element.

// #include <stdio.h>

// int main() {
//     int arr[5] = {1, 2, 3, 4, 5};
//     int (*ptr)[5] = &arr;  // Pointer to array of 5 integers


// printf("First element: %d\n", (*ptr)[0]);  // Access array elements through pointer
// printf("Second element: %d\n", (*ptr)[1]);

// return 0;
// }


//----------------------------------------------------------------------------------------------------------------------------------


// 8. Pointer to Pointer 
//     (Double Pointer)**
// -   pointer to a pointer** is a pointer that stores the address of another pointer.


// #include <stdio.h>

// int main() {
//     int a = 10;
//     int *ptr = &a;  // Pointer to int
//     int **ptr2 = &ptr;  // Pointer to pointer

//     printf("Value of a: %d\n", **ptr2);  // Dereference twice to access the value of a
//     return 0;
// }

// Key Points:

// Commonly used in dynamic memory allocation (e.g., allocating 2D arrays).
// Useful for passing pointers to functions by reference.

//----------------------------------------------------------------------------------------------------------------------------------

// 9. Constant Pointer

// A constant pointer is a pointer whose value (the address it points to) cannot be changed after initialization.

// #include <stdio.h>

// int main() {
//     int a = 10, b = 20;
//     int *const ptr = &a;  // Constant pointer to int
//     *ptr = 15;  // You can modify the value pointed to
//     // ptr = &b;  // Error: Cannot change the address stored in ptr
//     printf("%d\n", *ptr);
//     return 0;
// }


//----------------------------------------------------------------------------------------------------------------------------------

// 10. Pointer to a Constant

// A pointer to a constant is a pointer that cannot modify the value it points to.


// #include <stdio.h>

// int main() {
//     const int a = 10;
//     const int *ptr = &a;  // Pointer to a constant
//     // *ptr = 20;  // Error: Cannot modify the value pointed to
//     printf("%d\n", *ptr);
//     return 0;
// }


//----------------------------------------------------------------------------------------------------------------------------------


// 11. Constant Pointer to Constant

// A constant pointer to a constant is a pointer where neither the pointer value (address) nor the value it points to can be modified.

// #include <stdio.h>

// int main() {
//     const int a = 10;
//     const int *const ptr = &a;
//     // *ptr = 20;  // Error: Cannot modify the value pointed to
//     // ptr = &b;   // Error: Cannot modify the pointer itself
//     printf("%d\n", *ptr);
//     return 0;
// }


//----------------------------------------------------------------------------------------------------------------------------------


// Summary Table of Pointer Types

// Pointer Type	                Description
// Null Pointer	                Points to no valid memory location (NULL).
// Void Pointer	                Generic pointer that can point to any data type.
// Wild Pointer	                Uninitialized pointer pointing to random memory.
// Dangling Pointer	            Pointer pointing to deallocated or out-of-scope memory.
// Function Pointer	            Points to the address of a function and allows function calls via pointers.
// Array of Pointers	        Array where elements are pointers.
// Pointer to Array	            Points to an entire array.
// Pointer to Pointer	        Points to another pointer (e.g., int **).
// Constant Pointer	            Pointer that cannot point to another address but can modify the value it points to.
// Pointer to a Constant	    Pointer that cannot modify the value it points to.
// Constant Pointer to Constant	Pointer that cannot modify the value it points to or the address it hold
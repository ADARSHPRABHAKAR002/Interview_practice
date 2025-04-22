// Data Type Hierarchy:
// char < short < int < long < float < double < long double

// Explicit Type Casting

// Explicit type casting is when the programmer manually converts one data type into another by 
// explicitly specifying the target type. This is done using the cast operator (type).


#include <stdio.h>

int main() {
    int a = 5, b = 2;
    float result;

    // Explicitly cast one operand to `float` for float division
    result = (float)a / b;
    printf("Result: %.2f\n", result);  // Output: 2.50

    return 0;
}


// 2. Casting Between Integer and Floating-point Types

// Converting between int and float/double.


// Example:

// c
// Copy Code
// #include <stdio.h>

// int main() {
//     float pi = 3.14159;
//     int int_pi = (int)pi;  // Truncate the fractional part

//     printf("Float: %.2f, Integer: %d\n", pi, int_pi);  // Output: Float: 3.14, Integer: 3

//     return 0;
// }


// 3. Casting Pointers

// In C, pointers can also be typecast. This is useful when working with low-level memory manipulation or generic data structures like void pointers (void*).


// Example:

// c
// Copy Code
// #include <stdio.h>

// int main() {
//     int a = 10;
//     void* ptr = &a;  // Store an integer pointer in a void pointer

//     int* int_ptr = (int*)ptr;  // Cast back to int pointer
//     printf("Value: %d\n", *int_ptr);  // Output: Value: 10

//     return 0;
// }


// Use Cases of Type Casting

// Prevent Integer Division:

// Cast integers to floating-point numbers to avoid truncation.
// c
// Copy Code
// float result = (float)a / b;
// Memory Management:

// Casting void* pointers to specific types when working with dynamic memory.
// c
// Copy Code
// int* arr = (int*)malloc(size * sizeof(int));
// Manipulating Bits:

// When dealing with hardware or low-level programming, casting might be necessary for interpreting data in specific formats.
// Interfacing with Legacy Code:

// Cast between data types to maintain compatibility with older APIs.
// Avoid Warnings:

// Explicit casting can eliminate compiler warnings when working with mixed types.


// Pitfalls of Type Casting

// Loss of Precision:

// Casting a float or double to an int truncates the fractional part.
// c
// Copy Code
// float f = 5.99;
// int i = (int)f;  // i becomes 5
// Undefined Behavior:

// Casting between incompatible pointer types (e.g., int* to char*) can cause undefined behavior if not handled correctly.
// Unexpected Results During Signed/Unsigned Conversion:

// When casting signed integers to unsigned types, negative values are interpreted as large positive numbers.
// c
// Copy Code
// int a = -1;
// unsigned int b = (unsigned int)a;  // Large positive number (depends on platform)
// Loss of Data:

// Casting large integers to smaller types can cause overflow or data loss.
// c
// Copy Code
// int a = 300;
// char b = (char)a;  // May result in overflow, depending on the platform


// Examples of Type Casting

// 1. Casting in Arithmetic Operations

// c
// Copy Code
// #include <stdio.h>

// int main() {
//     int a = 5, b = 2;
//     float result;

//     result = a / b;  // Integer division
//     printf("Without Casting: %.2f\n", result);  // Output: 2.00

//     result = (float)a / b;  // Cast `a` to float
//     printf("With Casting: %.2f\n", result);  // Output: 2.50

//     return 0;
// }


// 2. Casting for Bit Manipulation

// c
// Copy Code
// #include <stdio.h>

// int main() {
//     float f = 3.14;
//     int* p = (int*)&f;  // Cast float pointer to int pointer for bit-level access

//     printf("Float as integer: %d\n", *p);  // Prints the bitwise representation of `f`

//     return 0;
// }


// 3. Casting in Dynamic Memory

// c
// Copy Code
// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//     void* ptr = malloc(sizeof(int));  // Allocate memory
//     int* num = (int*)ptr;            // Cast void pointer to int pointer

//     *num = 42;
//     printf("Value: %d\n", *num);  // Output: 42

//     free(ptr);  // Free allocated memory
//     return 0;
// }
// MACRO

// Macros in C are part of the C Preprocessor, which processes a program before execution. 
// Macros allow you to define reusable pieces of code or constants that are substituted into your program during preprocessing.
// They are defined using the #define directive.

// #include <stdio.h>
// #define PI 3.14159  // Define a constant for PI

// int main() {
//     printf("Value of PI: %f\n", PI);
//     return 0;
// }


// 2.Function-like Macros

// #include <stdio.h>
// #define SQUARE(x) ((x) * (x))  // Function-like macro to calculate square

// int main() {
//     int num = 5;
//     printf("Square of %d: %d\n", num, SQUARE(num));  // Expands to ((5) * (5))
//     printf("Square of 3+1: %d\n", SQUARE(3 + 1));    // Expands to ((3 + 1) * (3 + 1))
//     return 0;
// }

// 3.Conditional Compilation Macros

// #include <stdio.h>
// #define DEBUG  // Enable debugging

// int main() {
// #ifdef DEBUG
//     printf("Debugging is enabled.\n");
// #else
//     printf("Debugging is disabled.\n");
// #endif
//     return 0;
// }

// 4. Parameterized Macros with Multiple Parameters

// #include <stdio.h>
// #define MAX(a, b) ((a) > (b) ? (a) : (b))  // Macro to find the maximum of two numbers

// int main() {
//     int x = 10, y = 20;
//     printf("Maximum of %d and %d is %d\n", x, y, MAX(x, y));  // Expands to ((10) > (20) ? (10) : (20))
//     return 0;
// }

// 5.Special Macros

#include <stdio.h>

int main() {
    printf("File: %s\n", __FILE__);  // Name of the source file
    printf("Line: %d\n", __LINE__);  // Current line number
    printf("Date: %s\n", __DATE__);  // Compilation date
    printf("Time: %s\n", __TIME__);  // Compilation time
    return 0;
}


// Example Program Demonstrating Macros
// #include <stdio.h>
// #define DEBUG  // Enable debugging
// #define PI 3.14159
// #define AREA_OF_CIRCLE(r) (PI * (r) * (r))
// #define MAX(a, b) ((a) > (b) ? (a) : (b))

// int main() {
//     float radius = 5.0;
//     printf("Area of circle with radius %.2f: %.2f\n", radius, AREA_OF_CIRCLE(radius));

//     int x = 10, y = 15;
//     printf("Max of %d and %d: %d\n", x, y, MAX(x, y));

// #ifdef DEBUG
//     printf("Debugging is enabled.\n");
// #else
//     printf("Debugging is disabled.\n");
// #endif

//     return 0;
// }
// Variadic Functions in C

// A variadic function in C is a function that can take a variable number of arguments. 
// Unlike regular functions, which have a fixed number of parameters, variadic functions allow you 
// to provide different numbers of arguments each time the function is called.How Variadic Functions Work

// Syntax:

// A variadic function has at least one fixed parameter, followed by an ellipsis (...) to indicate that additional arguments may follow.
// syntax
// return_type function_name(fixed_parameter, ...);


// Header File:

// To work with variadic functions, you need to include the header file <stdarg.h>.
// Common Macros for Variadic Functions (from <stdarg.h>):

// va_list: A type to declare a variable that will hold the arguments.
// va_start(): Initializes a va_list to retrieve arguments.
// va_arg(): Retrieves the next argument in the list.
// va_end(): Cleans up the va_list.


// Steps to Create a Variadic Function

// Include <stdarg.h>.
// Declare the function with a fixed argument followed by ....
// Use va_list to handle the variable arguments.
// Use va_start() to initialize the argument list.
// Use va_arg() to retrieve each argument.
// Use va_end() to clean up.

#include <stdio.h>
#include <stdarg.h>  // Required for variadic functions

// Variadic function to calculate the sum of numbers
int sum(int count, ...) {
    va_list args;  // Declare a list to hold the arguments
    int total = 0;

    // Initialize the list with the fixed argument `count`
    va_start(args, count);

    // Loop through all the arguments
    for (int i = 0; i < count; i++) {
        total += va_arg(args, int);  // Retrieve the next argument (assumed to be int)
    }

    // Clean up the list
    va_end(args);

    return total;
}

int main() {
    printf("Sum of 1, 2, 3: %d\n", sum(3, 1, 2, 3));  // Output: 6
    printf("Sum of 10, 20, 30, 40: %d\n", sum(4, 10, 20, 30, 40));  // Output: 100
    return 0;
}



// Example 2: A Custom printf Function
// Here’s how you could build a rudimentary version of printf:

// #include <stdio.h>
// #include <stdarg.h>  // Required for variadic functions

// void customPrintf(const char *format, ...) {
//     va_list args;
//     va_start(args, format);

//     while (*format) {
//         if (*format == '%') {
//             format++;  // Move to the next character
//             switch (*format) {
//                 case 'd': {  // Integer
//                     int i = va_arg(args, int);
//                     printf("%d", i);
//                     break;
//                 }
//                 case 'c': {  // Character
//                     char c = (char) va_arg(args, int);  // Characters are promoted to int
//                     putchar(c);
//                     break;
//                 }
//                 case 's': {  // String
//                     char *s = va_arg(args, char *);
//                     printf("%s", s);
//                     break;
//                 }
//                 default:
//                     putchar('%');
//                     putchar(*format);
//             }
//         } else {
//             putchar(*format);  // Print regular characters
//         }
//         format++;
//     }

//     va_end(args);
// }

// int main() {
//     customPrintf("Hello %s, your score is %d%% and grade is '%c'\n", "Alice", 85, 'A');
//     return 0;
// }

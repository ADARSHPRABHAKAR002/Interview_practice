// 1. Code Segment (Text Segment)

// Purpose: Stores the machine instructions (compiled code) of the program.
// Characteristics:
//      This segment is read-only to prevent accidental modification of program instructions.
//      Contains:
//          Executable instructions.
//          Read-only constants (e.g., string literals).
// Lifetime: Exists throughout the entire execution of the program.

// #include <stdio.h>
// int main() {
//     printf("Hello, World!\n");  // "Hello, World!" is stored in the code segment.
//     return 0;
// }

// 2. Data Segment

// Purpose: Stores initialized global and static variables.
// Characteristics:
//      Divided into two parts:
//          Read-Only Data: Contains constants (e.g., const int).
//          Writable Data: Global and static variables explicitly initialized at compile time(initialized only once).
//       Modifiable (except for constants).
// Lifetime: Exists throughout the entire execution of the program.

// #include <stdio.h>

// int global_var = 10;    // Stored in the data segment (initialized global variable)
// static int static_var = 20; // Stored in the data segment (initialized static variable)

// int main() {
//     printf("Global: %d, Static: %d\n", global_var, static_var);
//     return 0;
// }


// 3. BSS Segment (Uninitialized Data)

// Purpose: Stores uninitialized global and static variables.
// Characteristics:
//         Variables in this segment are automatically initialized to 0 (or NULL for pointers).
//         Does not occupy space in the executable but is allocated memory during runtime.
// Lifetime: Exists throughout the entire execution of the program.

// #include <stdio.h>

// int global_var_uninit;  // Stored in BSS (uninitialized global variable)
// static int static_var_uninit;  // Stored in BSS (uninitialized static variable)

// int main() {
//     printf("Global Uninit: %d, Static Uninit: %d\n", global_var_uninit, static_var_uninit);
//     return 0;
// }


// 4. Heap Segment

// Purpose: Stores dynamically allocated memory at runtime using functions like malloc(), calloc(), and realloc().
// Characteristics:
//      Memory is allocated and freed manually by the programmer.
//      If not explicitly freed with free(), it can lead to a memory leak.
//      Grows upwards in memory as more memory is allocated.
// Lifetime: Exists until explicitly deallocated or the program exits.

// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//     int *ptr = (int *)malloc(sizeof(int));  // Dynamically allocated memory on the heap
//     *ptr = 42;
//     printf("Heap Value: %d\n", *ptr);

//     free(ptr);  // Freeing the allocated memory
//     return 0;
// }

// Key Points:

// If free(ptr) is not called, the allocated memory will not be reclaimed until the program terminates.
// Always check if memory allocation succeeded:

// if (ptr == NULL) {
//     printf("Memory allocation failed.\n");
// }


// 5. Stack Segment

// Purpose: Stores local variables, function call information, and function arguments.
// Characteristics:
//         Grows and shrinks dynamically with function calls and returns.
//         Organized as a last-in, first-out (LIFO) structure.
//         Very fast (compared to the heap).
//         Limited in size (stack overflow can occur if the stack limit is exceeded).
// Lifetime: Exists until the function in which it is created returns.

// #include <stdio.h>

// void func() {
//     int local_var = 10;  // Stored in the stack
//     printf("Local Var: %d\n", local_var);
// }

// int main() {
//     func();  // local_var exists only during the execution of func()
//     return 0;
// }
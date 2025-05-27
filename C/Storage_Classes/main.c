// In C, storage classes determine the visibility (scope), lifetime, and initialization of variables and functions. They essentially control how memory is managed and accessed for these elements within a program. 
// Here's a breakdown of the key storage classes in C:

// 1. auto (Automatic): 
// Scope: Local to the block or function where it's declared.
// Lifetime: Exists only while the function or block is active.
// Initialization: Uninitialized (contains a garbage value).

    void myFunction() {
        auto int x = 10; // Equivalent to just 'int x = 10;'
        // x is only accessible within this function
    }

    // Note: auto is the default storage class for local variables, so it's often omitted

// 2. register: 
// Scope: Local to the block or function where it's declared.
// Lifetime: Exists only while the function or block is active.
// Initialization: Uninitialized.
// Storage: The compiler tries to store the variable in a CPU register for faster access, but it's not guaranteed.
// Example

    void myFunction() {
        register int count = 0; // Compiler might store in a register
    }

// 3. static:
// Scope:
// Within a function: The variable is local to the function but its lifetime extends throughout the program's execution. 
// Global: The variable is accessible throughout the program, but only within the same file. 
// Lifetime: Persists throughout the program's execution. 
// Initialization: Initialized to zero if not explicitly initialized. 
// Example:

    static int globalVariable = 0; // Global but accessible only within the same file
    void myFunction() {
        static int localVar = 0; // Persists between calls to myFunction
    }

// 4. extern: 
// Scope: Used to declare global variables or functions that are defined in other source files.
// Lifetime: Persists throughout the program's execution.
// Initialization: Not initialized, the actual definition provides initialization.
// Example:

    // file1.c
    int globalVar = 10; // Definition of globalVar
    // file2.c
    extern int globalVar; // Declaration of globalVar (no storage allocated)
    // Accessing globalVar in file2.c

    // Note: extern declares a variable or function without allocating storage; the actual definition must be in another file. 
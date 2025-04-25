// Inline Functions in C++

// An inline function in C++ is a function where the compiler replaces the function call with the actual function code 
// during compilation, effectively eliminating the overhead of a function call. Inline functions improve performance for
// small, frequently called functions by avoiding the overhead of function calls like stack operations, parameter passing,
// and return.

// How Inline Functions Work

// When a function is declared inline, the compiler attempts to expand the function's code at the point of each
// function call, instead of performing a traditional function call. However, the compiler may choose not to inline
// a function if:


// The function is too large.
// The function contains complex constructs like loops or recursion.

// Syntax

// inline return_type function_name(parameters) {
//     // Function body
// }

#include <iostream>
using namespace std;

// Declare an inline function
inline int square(int x) {
    return x * x;
}

int main() {
    cout << "Square of 5: " << square(5) << endl;
    cout << "Square of 10: " << square(10) << endl;
    return 0;
}


//--------------------------------------------------------------------------------------------------------------------------
// Inline Function with Default Arguments

// #include <iostream>
// using namespace std;

// inline void greet(string name = "Guest") {
//     cout << "Hello, " << name << "!" << endl;
// }

// int main() {
//     greet();             // Default argument is used
//     greet("Alice");      // Custom argument is used
//     return 0;
// }

//-------------------------------------------------------------------------------------------------------------------------

// Inline Functions in Classes

// #include <iostream>
// using namespace std;

// class Calculator {
// public:
//     int square(int x) {  // Implicitly inline
//         return x * x;
//     }
// };

// int main() {
//     Calculator calc;
//     cout << "Square of 4: " << calc.square(4) << endl;
//     return 0;
// }


//------------------------------------------------------------------------------------------------------------------------
// Example: Inline Function for Debug Logging

// #include <iostream>
// using namespace std;

// inline void debugLog(const string& message) {
//     cout << "[DEBUG]: " << message << endl;
// }

// int main() {
//     debugLog("Application started");
//     debugLog("Performing calculations...");
//     debugLog("Application exiting");
//     return 0;
// }

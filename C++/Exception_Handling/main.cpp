// Exception Handling in C++

// Exception handling in C++ is a mechanism to handle runtime errors, ensuring the program can recover gracefully without
// crashing. It allows the separation of error-handling code from the main logic of the program, improving readability and
// maintainability.

#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 0;

    try {
        if (b == 0)
            throw "Division by zero error!";  // Throw an exception
        int result = a / b;
        cout << "Result: " << result << endl;
    } catch (const char* msg) {
        cout << "Exception caught: " << msg << endl;
    }

    return 0;
}

//-------------------------------------------------------------------------------------------------------------------------

// Example 2: Catching Different Exception Types

// #include <iostream>
// using namespace std;

// int main() {
//     try {
//         int choice;
//         cout << "Enter 1 for integer exception, 2 for double exception: ";
//         cin >> choice;

//         if (choice == 1)
//             throw 42;  // Throw an integer
//         else if (choice == 2)
//             throw 3.14;  // Throw a double
//         else
//             throw "Unknown exception";  // Throw a string
//     } catch (int e) {
//         cout << "Caught an integer: " << e << endl;
//     } catch (double e) {
//         cout << "Caught a double: " << e << endl;
//     } catch (const char* e) {
//         cout << "Caught a string: " << e << endl;
//     }

//     return 0;
// }

//-------------------------------------------------------------------------------------------------------------------------

// Example 3: Using std::exception

// C++ provides a standard library for exception handling, std::exception, which acts as the base class for all standard exceptions.

// #include <iostream>
// #include <exception>
// using namespace std;

// class MyException : public exception {
// public:
//     const char* what() const noexcept override {
//         return "Custom exception occurred!";
//     }
// };

// int main() {
//     try {
//         throw MyException();  // Throw a custom exception
//     } catch (const exception& e) {
//         cout << e.what() << endl;  // Call the what() method
//     }

//     return 0;
// }

//-------------------------------------------------------------------------------------------------------------------------

// Example 4: Nested try-catch Blocks

// Exception handling in C++ supports nesting of try-catch blocks.

// #include <iostream>
// using namespace std;

// int main() {
//     try {
//         try {
//             throw 100;  // Inner throw
//         } catch (int e) {
//             cout << "Caught exception in inner try-catch: " << e << endl;
//             throw;  // Rethrow the exception to the outer try-catch
//         }
//     } catch (int e) {
//         cout << "Caught exception in outer try-catch: " << e << endl;
//     }

//     return 0;
// }


// Summary Table

// Keyword	Description
// try	            Defines a block of code where exceptions might occur.
// catch   	        Handles exceptions thrown in the try block.
// throw	        Used to throw an exception.
// std::exception	Base class for standard exception objects.
// what()	        Member function of std::exception to provide error messages.
// catch (...)	    Catch-all handler to catch any exception.

// Conclusion

// Exception handling in C++ is a powerful mechanism for dealing with runtime errors, ensuring the program can recover
// gracefully. By separating logic and error handling, C++ allows developers to write robust, maintainable, and modular code.
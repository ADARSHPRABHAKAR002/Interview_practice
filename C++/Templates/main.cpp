// Templates in C++

// Templates in C++ are a generic programming tool that allow you to write type-independent code.
// Instead of creating multiple versions of similar functions or classes for different data types,
// templates allow you to write one version of the function or class that works with any data type.

// 1. Function Templates

// A function template is a blueprint for creating functions that work with any data type.
// The compiler generates a specific instance of the template for each data type used.

#include <iostream>
using namespace std;

template <typename T>
T add(T a, T b) {  // Generic function
    return a + b;
}

int main() {
    cout << "Int addition: " << add(5, 10) << endl;       // Instantiates add<int>(5, 10)
    cout << "Float addition: " << add(2.5, 3.5) << endl; // Instantiates add<float>(2.5, 3.5)
    return 0;
}

// Function Template with Multiple Parameters

// #include <iostream>
// using namespace std;

// template <typename T1, typename T2>
// void display(T1 a, T2 b) {
//     cout << "First: " << a << ", Second: " << b << endl;
// }

// int main() {
//     display(10, "Hello");      // int and string
//     display(3.14, 42);         // double and int
//     return 0;
// }

//---------------------------------------------------------------------------------------------------------------------------

// 2. Class Templates

// A class template allows you to define a generic class that can work with any data type. The compiler generates
// a specific version of the class for each data type used.

// Syntax:
// template <typename T>
// class ClassName {
//     T data;  // T is a placeholder for the type
// public:
//     ClassName(T value) : data(value) {}
//     T getData() { return data; }
// };

// #include <iostream>
// using namespace std;

// template <typename T>
// class Box {
//     T value;

// public:
//     Box(T v) : value(v) {}  // Constructor
//     void display() {
//         cout << "Value: " << value << endl;
//     }
// };

// int main() {
//     Box<int> intBox(10);        // Instantiate for int
//     Box<string> stringBox("C++ Templates");  // Instantiate for string

//     intBox.display();
//     stringBox.display();

//     return 0;
// }


//------------------------------------------------------------------------------------------------------------------------------


// 3. Template Specialization
// Sometimes, you need to customize the behavior of a template for a specific data type. This is called template specialization.

// #include <iostream>
// using namespace std;

// template <typename T>
// class Printer {
// public:
//     void print(T value) {
//         cout << "Generic Printer: " << value << endl;
//     }
// };

// // Specialization for char type
// template <>
// class Printer<char> {
// public:
//     void print(char value) {
//         cout << "Character Printer: " << value << endl;
//     }
// };

// int main() {
//     Printer<int> intPrinter;
//     Printer<char> charPrinter;

//     intPrinter.print(42);     // Generic template
//     charPrinter.print('A');   // Specialized template
//     return 0;
// }


//------------------------------------------------------------------------------------------------------------------------------


// 4. Variadic Templates (C++11)

// A variadic template allows you to work with a variable number of template parameters.
// This is particularly useful for functions that take a varying number of arguments.

// #include <iostream>
// using namespace std;

// template <typename T, typename... Args>
// void print(T first, Args... args) {
//     cout << first << " ";
//     if constexpr (sizeof...(args) > 0) {  // C++17: Use constexpr to stop recursion
//         print(args...);  // Recursive call
//     }
// }

// int main() {
//     print(1, 2.5, "Hello", 'A');  // Works with multiple types
//     return 0;
// }

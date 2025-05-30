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



//------------------------------------------------------------------------------------------------------------------//

// Types of Templates


// There are several types of templates in C++, including:


// Function Templates:              Function templates are used to define generic functions that can work with different data types.
// Class Templates:                 Class templates are used to define generic classes that can work with different data types.
// Variable Templates:              Variable templates are used to define generic variables that can work with different data types.
// Template Template Parameters:    Template template parameters are used to define templates that can take other templates as parameters.
// Default Template Arguments:      Default template arguments are used to provide default values for template parameters.
// Template Specialization:         Template specialization is used to provide a specific implementation of a template for a particular type.
// Template Partial Specialization: Template partial specialization is used to provide a specific implementation of a template for a particular type, while still allowing for other types to be used.
// Template Metaprogramming:        Template metaprogramming is a technique that allows for computations to be performed at compile-time using templates.

// 1.  Function Templates
//     Function templates are used to define generic functions that can work with different data types.
//     They are defined using the template keyword followed by a list of template parameters in angle brackets (< and >).

template <typename T>
T max(T a, T b) {
    return (a > b) ? a : b;
}


//--------------------------------------------------------------------------------------------------------//

// 2. Class Templates
//     Class templates are used to define generic classes that can work with different data types. 
//     They are defined using the template keyword followed by a list of template parameters in angle brackets (< and >).

template <typename T>
class Container {
public:
    void add(T element) {
        // Add element to the container
    }

    T get() {
        // Get an element from the container
    }
};


//--------------------------------------------------------------------------------------------------------//

// 3. Variable Templates
//     Variable templates are used to define generic variables that can work with different data types. 
//     They are defined using the template keyword followed by a list of template parameters in angle brackets (< and >).

template <typename T>
T pi = 3.14159;


//--------------------------------------------------------------------------------------------------------//

// 4. Template Template Parameters
//     Template template parameters are used to define templates that can take other templates as parameters.
//     They are defined using the template keyword followed by a list of template parameters in angle brackets (< and >).

template <template <typename T> class Container>
void process(Container<int> container) {
    // Process the container
}


//--------------------------------------------------------------------------------------------------------//

// 5. Default Template Arguments
//     Default template arguments are used to provide default values for template parameters. 
//     They are defined using the = operator followed by the default value.

template <typename T = int>
T max(T a, T b) {
    return (a > b) ? a : b;
}


//-----------------------------------------------------------------------------------------------------//

// 6. Template Specialization
//     Template specialization is used to provide a specific implementation of a template for a particular type.
//     It is defined using the template keyword followed by a list of template parameters in angle brackets (< and >), and then the specific type is specified.

template <>
int max(int a, int b) {
    return (a > b) ? a : b;
}

//-----------------------------------------------------------------------------------------------------//

// 7. Template Partial Specialization
//     Template partial specialization is used to provide a specific implementation of a template for a particular type, while still allowing for other types to be used. 
//     It is defined using the template keyword followed by a list of template parameters in angle brackets (< and >), and then the specific type is specified.

template <typename T>
T max(T a, T b) {
    return (a > b) ? a : b;
}

template <typename T>
T max(T* a, T* b) {
    return (a > b) ? a : b;
}


//-----------------------------------------------------------------------------------------------------//

// 8. Template Metaprogramming
//     Template metaprogramming is a technique that allows for computations to be performed at compile-time using templates. 
//     It is commonly used to implement generic algorithms and data structures.

template <int N>
struct Factorial {
    enum { value = N * Factorial<N - 1>::value };
};

template <>
struct Factorial<0> {
    enum { value = 1 };
};

//-----------------------------------------------------------------------------------------------------//
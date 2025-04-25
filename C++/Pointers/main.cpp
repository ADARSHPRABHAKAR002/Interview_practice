// Pointers in C++

// A pointer in C++ is a special type of variable used to store the memory address of another variable.
// Pointers are one of the most powerful features in C++ and are widely used in memory management, dynamic allocation,
// and for accessing and manipulating data indirectly.

// 1. Null Pointer

// A null pointer is a pointer that does not point to any valid memory location. It is initialized with the keyword
// nullptr in C++ (or NULL in older C++ standards).

#include <iostream>
using namespace std;

int main() {
    int* ptr = nullptr;  // Null pointer
    if (ptr == nullptr) {
        cout << "Pointer is null" << endl;
    }
    return 0;
}


//------------------------------------------------------------------------------------------------------------------------

// 2. Void Pointer

// A void pointer is a generic pointer that can point to any data type. It must be explicitly typecast before dereferencing.

// #include <iostream>
// using namespace std;

// int main() {
//     int var = 42;
//     void* ptr = &var;  // Void pointer
//     cout << "Value: " << *(int*)ptr << endl;  // Typecast before dereferencing
//     return 0;
// }

//------------------------------------------------------------------------------------------------------------------------

// 3. Dangling Pointer

// A dangling pointer points to memory that has been deallocated or is out of scope. Dereferencing a dangling pointer 
// leads to undefined behavior.

// #include <iostream>
// using namespace std;

// int* danglingPointer() {
//     int x = 10;  // Local variable
//     return &x;   // Returning address of local variable
// }

// int main() {
//     int* ptr = danglingPointer();
//     // cout << *ptr;  // Dereferencing ptr is undefined behavior
//     return 0;
// }

//------------------------------------------------------------------------------------------------------------------------

// 4. Wild Pointer

// A wild pointer is an uninitialized pointer that points to a random memory location. Dereferencing 
// a wild pointer results in undefined behavior.


// #include <iostream>
// using namespace std;

// int main() {
//     int* ptr;  // Uninitialized pointer (wild pointer)
//     // cout << *ptr;  // Dereferencing wild pointer is dangerous
//     return 0;
// }

//------------------------------------------------------------------------------------------------------------------------

// 5. Smart Pointer (Modern C++)

// A smart pointer is an object that manages a pointer automatically. It ensures memory is freed when the pointer goes
// out of scope, preventing memory leaks. Smart pointers are available in <memory>.

// #include <iostream>
// #include <memory>  // For smart pointers
// using namespace std;

// int main() {
//     shared_ptr<int> p1 = make_shared<int>(10);  // Shared pointer
//     unique_ptr<int> p2 = make_unique<int>(20);  // Unique pointer

//     cout << "Shared Pointer Value: " << *p1 << endl;
//     cout << "Unique Pointer Value: " << *p2 << endl;

//     return 0;
// }

//------------------------------------------------------------------------------------------------------------------------

// 6. Function Pointer

// A function pointer stores the address of a function and allows us to call the function indirectly.

// #include <iostream>
// using namespace std;

// void greet() {
//     cout << "Hello, World!" << endl;
// }

// int main() {
//     void (*funcPtr)() = &greet;  // Pointer to function
//     funcPtr();  // Call the function via the pointer
//     return 0;
// }


//------------------------------------------------------------------------------------------------------------------------

// 7. Pointer to Pointer

// A pointer to a pointer is a pointer that stores the address of another pointer.

// #include <iostream>
// using namespace std;

// int main() {
//     int var = 10;
//     int* ptr = &var;       // Pointer to int
//     int** ptr2 = &ptr;     // Pointer to pointer

//     cout << "Value: " << **ptr2 << endl;  // Dereference twice
//     return 0;
// }

//------------------------------------------------------------------------------------------------------------------------

// Dynamic Memory Allocation

// #include <iostream>
// using namespace std;

// int main() {
//     int* ptr = new int(5);  // Dynamically allocate memory for an integer
//     cout << "Value: " << *ptr << endl;

//     delete ptr;  // Free the allocated memory
//     return 0;
// }

//------------------------------------------------------------------------------------------------------------------------

// Pointer Arithmetic

// Pointers can be incremented, decremented, or manipulated using arithmetic operations.

// #include <iostream>
// using namespace std;

// int main() {
//     int arr[] = {10, 20, 30};
//     int* ptr = arr;

//     cout << "Value at ptr: " << *ptr << endl;    // 10
//     cout << "Value at ptr + 1: " << *(ptr + 1) << endl;  // 20
//     return 0;
// }

//------------------------------------------------------------------------------------------------------------------------

// Passing Pointers to Functions

// Pointers can be used to pass data to functions by reference.

// #include <iostream>
// using namespace std;

// void increment(int* num) {
//     (*num)++;
// }

// int main() {
//     int value = 10;
//     increment(&value);
//     cout << "Value after increment: " << value << endl;
//     return 0;
// }

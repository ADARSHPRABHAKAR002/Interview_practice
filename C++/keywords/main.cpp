// 1. constexpr vs const

// Both constexpr and const are used to define variables that should not change, 
// but they differ in when and how they are evaluated.

#include <iostream>
using namespace std;

constexpr int square(int x) {  // Compile-time evaluated function
    return x * x;
}

int main() {
    constexpr int result = square(5);  // Evaluated at compile time
    cout << "Result: " << result << endl;

    // const int runtimeResult = square(10); // Uncommenting this works since constexpr can also act as a const function
    return 0;
}

// const example

// #include <iostream>
// using namespace std;

// void printValue(const int x) {  // Parameter cannot be modified inside this function
//     // x++;  // Error: x is const
//     cout << "Value: " << x << endl;
// }

// int main() {
//     const int value = 42;  // Const variable
//     printValue(value);

//     int runtimeValue;
//     cin >> runtimeValue;
//     const int result = runtimeValue * 2;  // Initialized at runtime
//     cout << "Result: " << result << endl;
//     return 0;
// }

//---------------------------------------------------------------------------------------------------------------------------

// 2. static

// The static keyword serves different purposes depending on its context:


// In a Function:
// Retains its value between function calls.
// Is initialized only once.

// In a Class:
// Shared by all objects of the class (class-level variable).
// Exists independently of any object.

// At Global Scope:
// Restricts the variable or function to the file it is declared in (internal linkage).

// #include <iostream>
// using namespace std;

// void counter() {
//     static int count = 0;  // Retains its value between calls
//     count++;
//     cout << "Count: " << count << endl;
// }

// int main() {
//     counter();  // Count: 1
//     counter();  // Count: 2
//     counter();  // Count: 3
//     return 0;
// }


// Static Member Variable in a Class Example

// #include <iostream>
// using namespace std;

// class Employee {
// private:
//     static int count;  // Static member variable
// public:
//     Employee() {
//         count++;  // Increment count on object creation
//     }

//     static int getCount() {  // Static member function
//         return count;
//     }
// };

// int Employee::count = 0;  // Define and initialize static variable

// int main() {
//     Employee e1, e2;
//     cout << "Number of Employees: " << Employee::getCount() << endl;
//     return 0;
// }

//-------------------------------------------------------------------------------------------------------------------------

// 3. volatile

// The volatile keyword tells the compiler that the value of a variable may change unexpectedly
// (e.g., due to hardware or another thread). It prevents the compiler from optimizing the variable,
// ensuring its value is always read from memory.

// #include <iostream>
// using namespace std;

// volatile int flag = 0;  // Volatile variable (e.g., updated by an external process)

// void checkFlag() {
//     while (flag == 0) {
//         // Without volatile, the compiler might optimize this loop to an infinite loop
//         // because it assumes flag doesn't change.
//     }
//     cout << "Flag changed!" << endl;
// }

// int main() {
//     // In a real-world scenario, another thread or hardware interrupt would update `flag`.
//     flag = 1;  // Simulate an external change
//     checkFlag();
//     return 0;
// }

//--------------------------------------------------------------------------------------------------------------------------

// 4. mutable

// The mutable keyword allows a member of a const object to be modified. It overrides the immutability
// of const for specific data members, making it useful for caching or logging.

// #include <iostream>
// #include <string>
// using namespace std;

// class Person {
// private:
//     string name;
//     mutable int accessCount;  // Can be modified in a const object

// public:
//     Person(string n) : name(n), accessCount(0) {}

//     string getName() const {
//         accessCount++;  // Allowed because accessCount is mutable
//         return name;
//     }

//     int getAccessCount() const { return accessCount; }
// };

// int main() {
//     const Person p("Alice");
//     cout << "Name: " << p.getName() << endl;
//     cout << "Access Count: " << p.getAccessCount() << endl;
//     cout << "Name: " << p.getName() << endl;
//     cout << "Access Count: " << p.getAccessCount() << endl;
//     return 0;
// }

// Friend Function in C++

// A friend function in C++ is a function that is not a member of a class but is allowed to access the private
// and protected members of that class. By declaring a function as a friend inside a class, the function is given
// special permission to access the class's private and protected data.

// Key Points About Friend Functions

// Not a Member Function:
//     A friend function is not a member of the class, so it cannot be called using an object of the class.

// Declared Inside the Class:
//     It is declared inside the class using the friend keyword.

// Defined Outside the Class:
//     Although declared inside the class, a friend function is defined like a normal function outside the class.

// Access Restrictions:
//     A friend function can access all members (public, private, and protected) of the class in which it is declared as a friend.
//     Not Inherited:

// Friendship is not inherited. 
//     If a class declares a function as a friend, its derived classes do not automatically grant the same access.


#include <iostream>
using namespace std;

class Box {
private:
    double length;

public:
    Box(double len) : length(len) {}

    // Declare the friend function
    friend double getLength(Box b);
};

// Define the friend function
double getLength(Box b) {
    return b.length;  // Access private member directly
}

int main() {
    Box box(10.5);  // Create an object of Box
    cout << "Length of the box: " << getLength(box) << endl;  // Call the friend function
    return 0;
}

//---------------------------------------------------------------------------------------------------------------------------

// Example: Friend Function with Multiple Classes

// Friend functions can be used to access private/protected members of multiple classes.


// #include <iostream>
// using namespace std;

// class ClassA;  // Forward declaration

// class ClassB {
// private:
//     int valueB;

// public:
//     ClassB(int b) : valueB(b) {}

//     // Declare the friend function
//     friend int addValues(ClassA a, ClassB b);
// };

// class ClassA {
// private:
//     int valueA;

// public:
//     ClassA(int a) : valueA(a) {}

//     // Declare the friend function
//     friend int addValues(ClassA a, ClassB b);
// };

// // Define the friend function
// int addValues(ClassA a, ClassB b) {
//     return a.valueA + b.valueB;  // Access private members of both classes
// }

// int main() {
//     ClassA objA(10);
//     ClassB objB(20);

//     cout << "Sum: " << addValues(objA, objB) << endl;  // Call friend function
//     return 0;
// }

//---------------------------------------------------------------------------------------------------------------------------


// Friend Function and Operator Overloading

// Friend functions are commonly used to overload operators when the left operand is not an object of the class (e.g., cin, cout).


// Example: Overloading << and >> Operators

// #include <iostream>
// using namespace std;

// class Complex {
// private:
//     double real, imag;

// public:
//     Complex(double r = 0, double i = 0) : real(r), imag(i) {}

//     // Declare friend functions for input and output
//     friend ostream& operator<<(ostream& out, const Complex& c);
//     friend istream& operator>>(istream& in, Complex& c);
// };

// // Define friend function to overload <<
// ostream& operator<<(ostream& out, const Complex& c) {
//     out << c.real << " + " << c.imag << "i";
//     return out;
// }

// // Define friend function to overload >>
// istream& operator>>(istream& in, Complex& c) {
//     cout << "Enter real part: ";
//     in >> c.real;
//     cout << "Enter imaginary part: ";
//     in >> c.imag;
//     return in;
// }

// int main() {
//     Complex c1;
//     cin >> c1;  // Input using overloaded >>
//     cout << "Complex number: " << c1 << endl;  // Output using overloaded <<
//     return 0;
// }

//---------------------------------------------------------------------------------------------------------------------------

// Example: Friend Class

// A friend class allows one class to access the private/protected members of another class.

// #include <iostream>
// using namespace std;

// class ClassA {
// private:
//     int value;

// public:
//     ClassA(int v) : value(v) {}

//     // Declare ClassB as a friend
//     friend class ClassB;
// };

// class ClassB {
// public:
//     void printValue(ClassA a) {
//         cout << "Value from ClassA: " << a.value << endl;
//     }
// };

// int main() {
//     ClassA objA(100);
//     ClassB objB;

//     objB.printValue(objA);  // ClassB accesses ClassA's private member
//     return 0;
// }

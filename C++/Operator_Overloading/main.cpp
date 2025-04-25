// Operator Overloading in C++

// Operator overloading in C++ allows you to redefine the behavior of operators (such as +, -, *, =) for user-defined types
// (i.e., classes). This makes it possible to use operators with objects in a way that feels natural, enhancing the readability 
// and usability of the code.

// Key Points About Operator Overloading

// Only Existing Operators Can Be Overloaded:

// You cannot create new operators.
// Overloadable operators include +, -, *, /, ==, <, [], etc.
// Certain Operators Cannot Be Overloaded:

// Operators like :: (scope resolution), . (member access), sizeof, .* (pointer-to-member), and typeid cannot be overloaded.
// Syntax:

// Use the operator keyword to define the overloaded operator.
// Overloaded operators can either be member functions or non-member functions.
// Default Behavior:

// The default behavior of operators for built-in types cannot be changed.
// Friend Functions:

// Non-member functions can be used for overloading, but they often need to be declared as friend to access private and protected members of the class.


#include <iostream>
using namespace std;

class Complex {
private:
    double real, imag;

public:
    // Constructor
    Complex(double r = 0, double i = 0) : real(r), imag(i) {}

    // Overload + operator using a member function
    Complex operator+(const Complex &obj) {
        return Complex(real + obj.real, imag + obj.imag);
    }

    // Display the complex number
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(3.5, 2.5), c2(1.5, 3.5);
    Complex c3 = c1 + c2;  // Calls the overloaded + operator

    c3.display();  // Output: 5 + 6i
    return 0;
}


//--------------------------------------------------------------------------------------------------------------------------

// 2. Overloading the == Operator

// #include <iostream>
// using namespace std;

// class Box {
// private:
//     int length, width, height;

// public:
//     // Constructor
//     Box(int l, int w, int h) : length(l), width(w), height(h) {}

//     // Overload == operator
//     bool operator==(const Box &b) {
//         return (length == b.length && width == b.width && height == b.height);
//     }
// };

// int main() {
//     Box box1(10, 20, 30);
//     Box box2(10, 20, 30);
//     Box box3(5, 15, 10);

//     if (box1 == box2)
//         cout << "Box1 is equal to Box2" << endl;
//     else
//         cout << "Box1 is not equal to Box2" << endl;

//     if (box1 == box3)
//         cout << "Box1 is equal to Box3" << endl;
//     else
//         cout << "Box1 is not equal to Box3" << endl;

//     return 0;
// }


//--------------------------------------------------------------------------------------------------------------------------

// 3. Overloading the [] Operator

// #include <iostream>
// using namespace std;

// class Array {
// private:
//     int arr[5];

// public:
//     // Constructor to initialize array elements
//     Array() {
//         for (int i = 0; i < 5; i++) {
//             arr[i] = i + 1;  // Initialize with 1, 2, 3, 4, 5
//         }
//     }

//     // Overload [] operator
//     int &operator[](int index) {
//         if (index < 0 || index >= 5) {
//             cout << "Index out of bounds!" << endl;
//             exit(0);
//         }
//         return arr[index];
//     }
// };

// int main() {
//     Array myArray;

//     myArray[2] = 10;  // Assign value to index 2
//     cout << "Value at index 2: " << myArray[2] << endl;  // Output: 10

//     return 0;
// }

//--------------------------------------------------------------------------------------------------------------------------

// 4. Overloading the << and >> Operators

// #include <iostream>
// using namespace std;

// class Point {
// private:
//     int x, y;

// public:
//     Point(int x = 0, int y = 0) : x(x), y(y) {}

//     // Overload << operator (friend function)
//     friend ostream &operator<<(ostream &out, const Point &p) {
//         out << "(" << p.x << ", " << p.y << ")";
//         return out;
//     }

//     // Overload >> operator (friend function)
//     friend istream &operator>>(istream &in, Point &p) {
//         in >> p.x >> p.y;
//         return in;
//     }
// };

// int main() {
//     Point p1, p2(10, 20);

//     cout << "Enter coordinates for point p1 (x y): ";
//     cin >> p1;  // Input using overloaded >> operator

//     cout << "Point p1: " << p1 << endl;  // Output using overloaded << operator
//     cout << "Point p2: " << p2 << endl;

//     return 0;
// }

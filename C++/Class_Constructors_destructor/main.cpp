// Class in C++

// A class in C++ is a blueprint for creating objects. It encapsulates data (member variables) and functions (member methods)
// that operate on the data. It allows the implementation of object-oriented programming (OOP) principles such as encapsulation, 
// abstraction, inheritance, and polymorphism.

// #include <iostream>
// using namespace std;
// class Person
// {
// private:
//     int age;
//     string name;
// public:
//     // defual constructor
//     Person(){
//         name = "unknown";
//         age = 0;
//         std::cout << "default constructor, person name " << name << " and age " << age << std::endl;
//     }

//     //parametrized constructor
//     Person(string name, int age){
//         this->name = name;
//         this->age = age;
//         std::cout << "parameterized constructor " << name << age << std::endl;
//     }

//     //copy constructor
//     Person(const Person &person){
//         name = person.name;
//         age = person.age;
//         std::cout << "copy concstrctor " << name << age << std::endl;
//     }
//     ~Person(){
//         std::cout << " default destructor" << name << age << std::endl;
//     }

//     //methods
//     void display() {
//         cout << "Name: " << name << ", Age: " << age << endl;
//     }
// };

// int main()
// {
//     Person person;
//     person.display();

//     Person person1("john",42);
//     person1.display();

//     Person person2 = person1;
//     person2.display();
    
//     return 0;
// }


// Key Concepts in Constructors and Destructors

// Constructor Overloading:

// Multiple constructors can be created in a class, differing in the number and type of parameters.
// this Pointer:

// Inside a member function, the this pointer refers to the calling object. It's often used to resolve naming conflicts in constructors.
// Destructor Behavior:

// Destructors are automatically called when the object goes out of scope (e.g., at the end of a block) or is explicitly deleted.
// Dynamic Memory:

// If a class uses new to allocate memory, ensure the destructor releases it using delete to prevent memory leaks.


//Constructor and Destructor with Dynamic Memory

// #include<iostream>
// using namespace std;

// class dynamic_array{
//     private:
//         int size;
//         int *arr;
    
//     public:
//         dynamic_array(int size){
//             this->size = size;
//             arr = new int(size);
//             for(int i=0; i<size; i++){
//                 arr[i] = i+1;
//             }
//         }

//         void display(){
//             for(int i=0; i<size; i++){
//                 cout << "array["<<i<<"] = " << arr[i] << endl;
//             }
//         }

//         ~dynamic_array(){
//             delete[] arr;
//             cout << "dynamic memory if deallocated " << endl;
//         }
// };
// int main()
// {
//     dynamic_array d1(5);

//     d1.display();

//     return 0;
// }


//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

// default Destructor
// A default destructor is a destructor that is not marked as virtual. It follows the standard destructor behavior and is appropriate for classes that are not intended to be used as base classes in inheritance hierarchies.


// Key Points:

// Destruction Without Polymorphism:

// If a destructor is not virtual, the destructor of the derived class may not be called when the object is destroyed through a base class pointer.
// This can lead to resource leaks or undefined behavior if the derived class dynamically allocates resources and does not clean them up.
// Compile-Time Binding:

// The destructor is statically (compile-time) bound to the type of the pointer (not the actual object type).
// Use Case:

// Default destructors are sufficient for non-polymorphic classes, where the class is not part of an inheritance hierarchy.

// #include <iostream>
// using namespace std;

// class Base {
// public:
//     ~Base() {  // Default destructor
//         cout << "Base destructor called." << endl;
//     }
// };

// class Derived : public Base {
// public:
//     ~Derived() {  // Default destructor
//         cout << "Derived destructor called." << endl;
//     }
// };

// int main() {
//     Base* obj = new Derived();  // Base pointer pointing to Derived object
//     delete obj;  // Destructor for Derived won't be called
//     return 0;
// }


// not cleaning up the derived class (adavntage of the vitual destructor)

//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

// Virtual Destructor

// A virtual destructor ensures that the destructor of the most derived class is called, even when the object is destroyed through a base class pointer. This is critical in polymorphic classes where dynamic memory allocation may occur.


// Key Points:

// Destruction With Polymorphism:

// If a destructor is marked virtual, the destructor of the derived class is called first, followed by the destructor of the base class. This ensures proper cleanup.
// Runtime Binding:

// The destructor is dynamically (runtime) bound to the actual type of the object, not the type of the pointer.
// Use Case:

// Virtual destructors are required for polymorphic base classes to ensure proper destruction of derived class objects.


// #include <iostream>
// using namespace std;

// class Base {
// public:
//     virtual ~Base() {  // Virtual destructor
//         cout << "Base destructor called." << endl;
//     }
// };

// class Derived : public Base {
// public:
//     ~Derived() {  // Virtual destructor
//         cout << "Derived destructor called." << endl;
//     }
// };

// int main() {
//     Base* obj = new Derived();  // Base pointer pointing to Derived object
//     delete obj;  // Correctly destroys both Derived and Base
//     return 0;
// }


// Output:

// Derived destructor called.
// Base destructor called.



//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// program to maintain the colleage library

#include <iostream>
using namespace std;

struct stdDtl
{
    int id;
    char* name;
    char* year;
    char* sem;
    char* section;
    float libDues = 0;
    struct StdbookList* prt;
};


struct StdBook{
    char* bookName;
    char* authName;
    StdBook* next;
};


struct StdbookList{
    int numBook = 0;
    StdBook* head;

};

struct Library
{
    char* libraryName;
    bookSection* secPtr;
};

struct bookSection{
    char* secName;
    bookDlt* bookDltHeadptr;

};

struct bookDlt{
    int bookId;
    char* nameBook;
    char* nameAuth;
    bookDlt* next;
    int copies;
};


class JnnceLibrary{
    private:
        stdDtl* std;
        StdbookList* book;
        StdBook* b;

    public:
        JnnceLibrary(){
            cout << "WelCome to the JNNCE Library Maintainance \n" << endl;
        }

        ~JnnceLibrary()
        {
            //implement;
        }

        bool addStudent(int id, char* name, char* year, char* sem, char* section);
        bool addBookToStd(char* bookName, char* authName);

        bool addLibrary(char* libraryName);
        






};



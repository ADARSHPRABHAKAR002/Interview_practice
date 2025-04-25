// 1. Encapsulation

// Encapsulation is the process of binding data and methods that operate on that data into a single unit (class).
// It enforces data hiding by keeping data members private and exposing them through public methods (getters and setters).

// #include <iostream>
// using namespace std;

// class BankAccount {
// private:
//     double balance;  // Private member variable

// public:
//     BankAccount(double initialBalance) {  // Constructor
//         balance = initialBalance;
//     }

//     void deposit(double amount) {
//         balance += amount;
//     }

//     void withdraw(double amount) {
//         if (amount <= balance) {
//             balance -= amount;
//         } else {
//             cout << "Insufficient balance!" << endl;
//         }
//     }

//     double getBalance() const {  // Getter
//         return balance;
//     }
// };

// int main() {
//     BankAccount account(1000.0);  // Create an object with initial balance

//     account.deposit(500.0);
//     account.withdraw(200.0);

//     cout << "Current balance: $" << account.getBalance() << endl;  // Access balance through getter
//     return 0;
// }


//---------------------------------------------------------------------------------------------------------------------------

// 2. Abstraction

// Abstraction focuses on hiding the implementation details and showing only the essential features of an object.
// This is achieved by defining interfaces (using abstract classes or pure virtual functions).

// #include <iostream>
// using namespace std;

// class Shape{
//     public:
//         virtual void draw() = 0; //pure virtual function

// };

// class Circle : public Shape{
//     public:
//         void draw() override{
//             cout << "drawing circle shape" << endl;
//         }
// };

// class Sqaure : public Shape{
//     public:
//         void draw() override{
//             cout << "drawing square shape" << endl;
//         }
// };

// int main()
// {
//     Shape* shape1 = new Circle();
//     Shape* shape2 = new Sqaure();

//     shape1->draw();
//     shape2->draw();

//     return 0;
// }

//---------------------------------------------------------------------------------------------------------------------------

// 3. Inheritance

// Inheritance allows a class (derived class) to inherit properties and behaviors from another class (base class).
// It promotes code reuse and supports hierarchical relationships.

// Types of Inheritance:

// Single Inheritance
// Multilevel Inheritance
// Multiple Inheritance
// Hierarchical Inheritance
// Hybrid Inheritance

#include <iostream>
using namespace std;
class Animal{
    public:
        void eat(){
            cout << "animal eat food" << endl;
        }
};

class Dog : public Animal
{
    public:
        void bark() const {
            cout << "dog will bark" << endl; 
        }

};

int main()
{
    Dog abhi;
    abhi.bark();
    abhi.eat();

    Dog* abhishek = new Dog();
    abhishek->eat();
    abhishek->bark();


    return 0;
}

//---------------------------------------------------------------------------------------------------------------------------

// 4.Polymorphism

// Polymorphism means "many forms". It allows functions or objects to behave differently based on the context.
// There are two types:
// Compile-time Polymorphism (Function Overloading, Operator Overloading)
// Runtime Polymorphism (Virtual Functions)
// Compile-time Polymorphism (Function Overloading):

// #include <iostream>
// using namespace std;

// class Calculator {
// public:
//     int add(int a, int b) {
//         return a + b;
//     }

//     double add(double a, double b) {
//         return a + b;
//     }
// };

// int main() {
//     Calculator calc;
//     cout << "Sum (int): " << calc.add(5, 3) << endl;
//     cout << "Sum (double): " << calc.add(5.5, 3.3) << endl;
//     return 0;
// }

// Runtime Polymorphism (Virtual Functions):

// #include <iostream>
// using namespace std;

// class Animal {
// public:
//     virtual void makeSound() {  // Virtual function
//         cout << "Animal makes a sound" << endl;
//     }
// };

// class Dog : public Animal {
// public:
//     void makeSound() override {  // Override base class function
//         cout << "Dog barks" << endl;
//     }
// };

// int main() {
//     Animal* animal = new Dog();  // Base class pointer pointing to derived class object
//     animal->makeSound();  // Calls Dog's makeSound() at runtime

//     delete animal;
//     return 0;
// }


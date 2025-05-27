// Key Characteristics of Static Functions:
// Associated with a Class, Not Instances: Static functions belong to the class itself, not to individual objects. 
// Called Using the Class Name: You can invoke a static function using the class name followed by the function name, like ClassName.staticFunctionName(). 
// No Instance Access: Static functions do not have access to instance variables (non-static member variables) of the class. They can only work with static variables and static methods. 
// Utility Functions: They are often used for utility tasks, helper functions, or for accessing class-level data.    
   
   
   class MyClass {
    public:
        static void staticMethod() {
            // Code for the static method
        }
    };
    
    int main() {
        MyClass::staticMethod(); // Calling the static method using the class name
        return 0;
    }


// Can we use a non-static member in a static function?

// It is not possible to directly access a non-static member (variable or function) from a static function in most object-oriented 
// programming languages, including C++, Java, and C#. This limitation stems from the fundamental differences between static and non-static members. 

// Static members belong to the class itself, not to any specific instance (object) of the class. They exist independently of any objects being created.
// On the other hand, non-static members are associated with individual objects of the class. Each object has its own copy of non-static members. 

// Static functions do not have access to the this pointer, which refers to the current object instance. Without the this pointer, a static function 
// cannot know which object's non-static members it should access. 

// If a static function needs to interact with non-static members, it must do so through an object instance that is explicitly passed as an 
// argument or created within the function. 

// ```cpp 
// class MyClass { 
// public: 
// int nonStaticVar; 
// static int staticVar; 

// static void staticFunction(MyClass& obj) { 
// // Accessing static variable directly 
// staticVar = 10; 

// // Accessing non-static variable through an object 
// obj.nonStaticVar = 20; 
// } 

// void nonStaticFunction() { 
// // Accessing both static and non-static members is allowed 
// staticVar = 30; 
// nonStaticVar = 40; 
// } 
// }; 

// int MyClass::staticVar = 0; 

// int main() { 
// MyClass obj; 
// MyClass::staticFunction(obj); 
// return 0; 
// } 
// ``` 

// In this example, staticFunction can access nonStaticVar only because it receives an object of MyClass as an argument. Inside nonStaticFunction, 
// both staticVar and nonStaticVar can be accessed directly because it operates within the context of an object.
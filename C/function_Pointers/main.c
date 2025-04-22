// 1. Function Pointers

// A function pointer is a pointer that stores the address of a function. 
// This allows you to call functions indirectly and pass them as arguments to other functions. 
// Function pointers are especially useful in implementing callbacks, event-driven programming, 
// and dynamic behavior.

// #include<stdio.h>
// void greet(){
//     printf("Hello, world!\n");
// }

// int add(int a, int b){
//     return a+b;
// }
// int main()
// {
//     void (*ptr)() = &greet;
//     ptr();

//     int (*ptr_add)(int,int) = &add;
//     int result = ptr_add(5,4);

//     printf("%d",result);


//     return 0;
// }


#include <stdio.h>

// Function that takes a callback (function pointer)
void executeCallback(void (*callbackFunc)()) {
    callbackFunc();  // Call the function passed as a pointer
}

// A simple callback function
void sayHello() {
    printf("Hello from the callback!\n");
}

int main() {
    // Pass the `sayHello` function as a pointer to `executeCallback`
    executeCallback(sayHello);

    return 0;
}


// #include <stdio.h>

// // Functions
// int add(int a, int b) { return a + b; }
// int subtract(int a, int b) { return a - b; }
// int multiply(int a, int b) { return a * b; }

// int main() {
//     // Array of function pointers
//     int (*operations[])(int, int) = {add, subtract, multiply};

//     // Use pointer arithmetic to call each function
//     int a = 10, b = 5;

//     for (int i = 0; i < 3; i++) {
//         printf("Result of operation %d: %d\n", i + 1, operations[i](a, b));
//     }

//     return 0;
// }

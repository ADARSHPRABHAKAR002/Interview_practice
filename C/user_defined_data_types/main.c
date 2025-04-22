// . struct (Structure)

// A struct is a user-defined data type that groups related variables (possibly of different data types)
// into a single entity. It is often used to represent complex data structures.

// #include <stdio.h>

// struct Employee {
//     int id;           // ID of the employee
//     char name[50];    // Name of the employee
//     float salary;     // Salary of the employee
// };

// int main() {
//     struct Employee emp1;  // Declare a variable of type `struct Employee`

//     // Assign values to the members
//     emp1.id = 101;
//     emp1.salary = 50000.50;
//     snprintf(emp1.name, 50, "John Doe");

//     // Access and display the members
//     printf("Employee ID: %d\n", emp1.id);
//     printf("Employee Name: %s\n", emp1.name);
//     printf("Employee Salary: %.2f\n", emp1.salary);

//     return 0;
// }

// 2. union

// A union is similar to a struct, but in a union, all members share the same memory location. 
// Only one member can hold a value at any given time. This is useful when you want to save memory.

// #include <stdio.h>

// union Data {
//     int i;
//     float f;
//     char str[20];
// };

// int main() {
//     union Data data;

//     // Assigning and accessing members
//     data.i = 10;
//     printf("Integer: %d\n", data.i);

//     data.f = 220.5;
//     printf("Float: %.2f\n", data.f);

//     snprintf(data.str, 20, "Hello");
//     printf("String: %s\n", data.str);

//     // Note: Only the most recently assigned value is valid
//     printf("Corrupted Integer: %d\n", data.i);  // Undefined behavior

//     return 0;
// }

// Key Difference Between struct and union:

// In a struct, each member has a separate memory location.
// In a union, all members share the same memory.


// 3. enum (Enumeration)

// An enum is a user-defined data type that assigns names to a set of integral constant values, 
// improving code readability by replacing magic numbers with descriptive names.

#include <stdio.h>

enum Day { SUNDAY = 4, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY = 6 };

int main() {
    enum Day today;
    today = TUESDAY;

    printf("Today is day number: %d\n", today);  // WEDNESDAY has value 3 (0-indexed)

    return 0;
}

// 4. typedef

// typedef allows you to define a new name (alias) for an existing type. 
// It is useful for improving readability, especially for complex types like pointers or structures.


// #include <stdio.h>

// typedef unsigned int uint;  // `uint` is now an alias for `unsigned int`

// int main() {
//     uint num = 100;  // Equivalent to `unsigned int num = 100`
//     printf("Value: %u\n", num);
//     return 0;
// }
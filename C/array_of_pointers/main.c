// 1. Array of Pointers

// An array of pointers is an array where each element is a pointer. In simple terms, it is an array that can hold memory addresses (pointers), instead of regular values like integers, floats, or characters.


// Key Characteristics:

// Each element in the array is a pointer.
// It is often used to store strings (or other arrays) or addresses of dynamically allocated memory blocks.

#include<stdio.h>
int main(){
    const char* arr[] = {"apple","banan","mango"};

    for(int i = 0; i<3; i++)
    {
        printf("%s\n",arr[i]);
    }
    return 0;
}


// #include <stdio.h>

// int main() {
//     // Array of pointers to strings
//     const char* fruits[] = {"Apple", "Banana", "Cherry", "Date"};

//     // Access elements using pointers
//     for (int i = 0; i < 4; i++) {
//         printf("Fruit[%d]: %s\n", i, fruits[i]);
//     }

//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int main() {
//     // Dynamically allocate memory for strings
//     char* fruits[4];
//     fruits[0] = (char*)malloc(strlen("Apple") + 1);
//     fruits[1] = (char*)malloc(strlen("Banana") + 1);
//     fruits[2] = (char*)malloc(strlen("Cherry") + 1);
//     fruits[3] = (char*)malloc(strlen("Date") + 1);

//     // Copy string literals into the allocated memory
//     strcpy(fruits[0], "Apple");
//     strcpy(fruits[1], "Banana");
//     strcpy(fruits[2], "Cherry");
//     strcpy(fruits[3], "Date");

//     // Access elements
//     for (int i = 0; i < 4; i++) {
//         printf("Fruit[%d]: %s\n", i, fruits[i]);
//     }

//     // Modify the strings (Example: Add "Fruit" to each string)
//     for (int i = 0; i < 4; i++) {
//         strcat(fruits[i], " Fruit");
//     }

//     printf("\nModified fruits:\n");
//     for (int i = 0; i < 4; i++) {
//         printf("Fruit[%d]: %s\n", i, fruits[i]);
//     }

//     // Free allocated memory
//     for (int i = 0; i < 4; i++) {
//         free(fruits[i]);
//     }

//     return 0;
// }
// strncpy in C

// The strncpy function in C is used to copy a specified number of characters from one string to another.
// It is part of the standard library <string.h>.

#include <stdio.h>
#include <string.h>

int main() {
    char src[] = "Hello, World!";
    char dest[20];

    // Copy at most 5 characters from src to dest
    strncpy(dest, src, 5);

    dest[5] = '\0';  // Add null terminator manually
    printf("Destination string: %s\n", dest);

    return 0;
}

//-------------------------------------------------------------------------------------------------------------------------------

// Custom strncpy Code

// #include <stdio.h>

// // Custom implementation of strncpy
// char *my_strncpy(char *dest, const char *src, size_t n) {
//     size_t i;

//     // Copy characters from source to destination
//     for (i = 0; i < n && src[i] != '\0'; i++) {
//         dest[i] = src[i];
//     }

//     // Pad the remaining space in dest with null characters, if needed
//     for (; i < n; i++) {
//         dest[i] = '\0';
//     }

//     return dest;
// }

// int main() {
//     char src[] = "Hello, World!";
//     char dest[20];

//     // Copy at most 5 characters from src to dest
//     my_strncpy(dest, src, 5);

//     dest[5] = '\0';  // Optional: Ensuring null termination
//     printf("Destination string: %s\n", dest);

//     return 0;
// }

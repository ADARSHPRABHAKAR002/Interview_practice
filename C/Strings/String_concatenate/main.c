// The strncat function in C is used to concatenate (append) one string to another, but with a limitation on the
// number of characters to append. It is part of the <string.h> library.

#include <stdio.h>
#include <string.h>

int main() {
    char dest[20] = "Hello, ";  // Destination string
    char src[] = "World!";      // Source string

    // Append up to 6 characters from src to dest
    strncat(dest, src, 6);

    printf("Resulting string: %s\n", dest);

    return 0;
}

// #include <stdio.h>
// #include <string.h>

// int main() {
//     char dest[10] = "Hello";
//     char src[] = "World!";

//     // This could cause a buffer overflow because dest has only 10 bytes,
//     // including space for the null terminator.
//     strncat(dest, src, 6);

//     printf("Result: %s\n", dest);  // Undefined behavior if overflow occurs
//     return 0;
// }

//---------------------------------------------------------------------------------------------------------------------------------


//Using my_strncat function

// #include <stdio.h>

// // Custom implementation of strncat
// char* my_strncat(char* dest, const char* src, size_t n) {
//     char* dest_ptr = dest;

//     // Move to the end of the destination string
//     while (*dest_ptr != '\0') {
//         dest_ptr++;
//     }

//     // Append up to 'n' characters from the source
//     while (n > 0 && *src != '\0') {
//         *dest_ptr = *src;
//         dest_ptr++;
//         src++;
//         n--;
//     }

//     // Null-terminate the destination string
//     *dest_ptr = '\0';

//     return dest;
// }

// int main() {
//     char dest[20] = "Hello, ";  // Destination string with enough space
//     const char src[] = "World!"; // Source string

//     // Call custom strncat function
//     my_strncat(dest, src, 6);

//     printf("Concatenated string: %s\n", dest);

//     return 0;
// }

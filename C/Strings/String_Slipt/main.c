// strtok Function in C

// The strtok function in C is used to split a string into a sequence of tokens based on specified delimiters.
// It is part of the <string.h> library


#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello,World,This,Is,C";  // String to tokenize
    const char delim[] = ",";             // Delimiter: comma

    char *token = strtok(str, delim);     // First call to strtok

    // Loop through all tokens
    while (token != NULL) {
        printf("Token: %s\n", token);
        token = strtok(NULL, delim);  // Subsequent calls pass NULL
    }

    return 0;
}


//--------------------------------------------------------------------------------------------------------------------------------------

//user own function

// #include <stdio.h>
// #include <stdbool.h>

// // Custom strtok implementation
// char *my_strtok(char *str, const char *delim) {
//     static char *next;  // Static variable to keep track of the next token
//     if (str != NULL) {
//         next = str;  // Initialize with the input string on the first call
//     }
//     if (next == NULL) {
//         return NULL;  // No more tokens
//     }

//     // Skip leading delimiters
//     while (*next && strchr(delim, *next) != NULL) {
//         next++;
//     }

//     if (*next == '\0') {
//         return NULL;  // No more tokens
//     }

//     char *token = next;  // Start of the token

//     // Find the end of the token
//     while (*next && strchr(delim, *next) == NULL) {
//         next++;
//     }

//     if (*next != '\0') {
//         *next = '\0';  // Null-terminate the token
//         next++;        // Move to the next character after the delimiter
//     } else {
//         next = NULL;  // Mark the end of tokens
//     }

//     return token;
// }

// int main() {
//     char str[] = "Hello,World,This,Is,C";  // String to tokenize
//     const char delim[] = ",";             // Delimiter

//     char *token = my_strtok(str, delim);  // First call to my_strtok

//     // Loop through all tokens
//     while (token != NULL) {
//         printf("Token: %s\n", token);
//         token = my_strtok(NULL, delim);  // Subsequent calls pass NULL
//     }

//     return 0;
// }

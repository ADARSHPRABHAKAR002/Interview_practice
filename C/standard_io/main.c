// Standard Input and Output (IO) in C

// Standard Input and Output (IO) in C refers to the mechanisms used by a program to interact with the user or peripheral devices. These operations are provided by the C Standard Library through functions declared in the <stdio.h> header file.


// Below, I'll explain the key concepts, functions, and examples of Standard IO in C.



// 1. Standard IO Streams

// The C language provides three standard streams for input and output:


// Standard Input (stdin):

// Used for input (e.g., from the keyboard).
// By default, stdin is connected to the keyboard.
// Standard Output (stdout):

// Used for output (e.g., to the console).
// By default, stdout is connected to the screen.
// Standard Error (stderr):

// Used for error messages (e.g., diagnostics).
// By default, stderr is also connected to the screen.


// 2. Input Functions

// scanf()

// Used to read formatted input from standard input (stdin).

// Syntax:

// c
// Copy Code
// int scanf(const char *format, ...);
// Example:

// c
// Copy Code
// #include <stdio.h>

// int main() {
//     int num;
//     printf("Enter an integer: ");
//     scanf("%d", &num);  // Reads an integer
//     printf("You entered: %d\n", num);
//     return 0;
// }

// getchar()

// Reads a single character from standard input (stdin).

// Syntax:

// c
// Copy Code
// int getchar(void);
// Example:

// c
// Copy Code
#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    ch = getchar();  // Reads a single character
    printf("You entered: %c\n", ch);
    return 0;
}

// gets() (Deprecated)

// Reads a string from stdin until a newline is encountered.
// Note: gets() is unsafe as it does not perform bounds checking.
// Use fgets() instead.

// fgets()

// Safely reads a string from standard input.

// Syntax:

// c
// Copy Code
// char* fgets(char *str, int n, FILE *stream);
// Example:

// c
// Copy Code
// #include <stdio.h>

// int main() {
//     char str[50];
//     printf("Enter a string: ");
//     fgets(str, 50, stdin);  // Reads a string (up to 49 characters + '\0')
//     printf("You entered: %s", str);
//     return 0;
// }


// 3. Output Functions

// printf()

// Used to print formatted output to standard output (stdout).

// Syntax:

// c
// Copy Code
// int printf(const char *format, ...);
// Example:

// c
// Copy Code
// #include <stdio.h>

// int main() {
//     int num = 10;
//     printf("The value of num is: %d\n", num);
//     return 0;
// }

// putchar()

// Writes a single character to standard output (stdout).

// Syntax:

// c
// Copy Code
// int putchar(int char);
// Example:

// c
// Copy Code
// #include <stdio.h>

// int main() {
//     char ch = 'A';
//     putchar(ch);  // Prints 'A'
//     putchar('\n');  // Prints a newline
//     return 0;
// }

// puts()

// Writes a string to standard output (stdout), followed by a newline.

// Syntax:

// c
// Copy Code
// int puts(const char *str);
// Example:

// c
// Copy Code
// #include <stdio.h>

// int main() {
//     char str[] = "Hello, World!";
//     puts(str);  // Prints the string followed by a newline
//     return 0;
// }


// 4. File IO (Advanced Standard IO)

// Although file IO is slightly different from Standard IO streams, it uses the same <stdio.h> library and follows similar principles. By default, stdin, stdout, and stderr correspond to the console, but you can redirect these or use files with custom streams.


// Key Functions

// fopen():

// Opens a file and returns a pointer to a FILE object.
// Syntax:
// c
// Copy Code
// FILE* fopen(const char *filename, const char *mode);
// fprintf():

// Writes formatted output to a file.
// Syntax:
// c
// Copy Code
// int fprintf(FILE *stream, const char *format, ...);
// fscanf():

// Reads formatted input from a file.
// Syntax:
// c
// Copy Code
// int fscanf(FILE *stream, const char *format, ...);
// Reading/Writing Files:

// c
// Copy Code
// #include <stdio.h>

// int main() {
//     FILE *file = fopen("example.txt", "w");  // Open file for writing
//     if (file == NULL) {
//         printf("Error opening file!\n");
//         return 1;
//     }

//     fprintf(file, "Hello, File!\n");  // Write to file
//     fclose(file);  // Close the file

//     return 0;
// }


// 5. Format Specifiers

// Format specifiers are used in functions like printf() and scanf() to determine the type of input/output data.


// Specifier	Type	Example
// %d	Integer (decimal)	123, -456
// %u	Unsigned integer	123, 456
// %f	Float	12.34, -56.78
// %lf	Double	123.456
// %c	Character	'A', 'z'
// %s	String	"Hello"
// %x	Unsigned hex (lowercase)	0x1a, 0x2f
// %X	Unsigned hex (uppercase)	0x1A, 0x2F
// %o	Octal	07, 015
// %p	Pointer address	0x7ffeabcd1234


// 6. Common Errors

// Mismatch Between Format Specifier and Data Type:

// Example: Using %d for a float or %f for an int will lead to undefined behavior.
// Buffer Overflow:

// Example: Using gets() instead of fgets() can overflow the buffer if the input exceeds its size.
// Uninitialized Variables:

// Always initialize variables before using them with input functions like scanf().
// Wrong Number of Arguments:

// Example: Forgetting to pass the address (&) of a variable in scanf().


// 7. Redirection of Standard IO

// You can redirect standard IO streams (stdin, stdout, and stderr) to files or other input/output devices.


// Example: Redirecting Standard Output to a File

// Command:


// bash
// Copy Code
// ./program > output.txt

// This redirects all stdout from program to output.txt.


// Example: Redirecting Input

// Command:


// bash
// Copy Code
// ./program < input.txt

// This redirects stdin from input.txt.


// Example: Redirecting Error Messages

// Command:


// bash
// Copy Code
// ./program 2> error.txt

// This redirects stderr to error.txt.



// 8. Summary

// Input Functions:

// scanf(): Reads formatted input.
// getchar(): Reads a single character.
// fgets(): Reads a string safely.

// Output Functions:

// printf(): Prints formatted output.
// putchar(): Prints a single character.
// puts(): Prints a string followed by a newline.

// File Functions:

// fopen(), fclose(): File handling.
// fscanf(), fprintf(): File input/output.
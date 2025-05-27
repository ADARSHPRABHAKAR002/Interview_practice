// #include<stdio.h>
// // #include <stdint.h> 
// // uint64_t swap_odd_even_bits(uint64_t number);
// int main()
// {
//     unsigned long long number = 0x6789ABCDEF;

//     printf("Original: 0x%X\n", number);




//     return 0;

// }




// 1. Bitwise AND (&)

// Compares each bit of two integers and returns 1 if both bits are 1, otherwise 0.

// A	B	A & B
// 0	0	0
// 0	1	0
// 1	0	0
// 1	1	1

// Example:

// c
// Copy Code
// #include <stdio.h>
// int main() {
//     int a = 5;  // Binary: 0101
//     int b = 3;  // Binary: 0011
//     int result = a & b;  // Binary: 0001 (Decimal: 1)
//     printf("a & b = %d\n", result);
//     return 0;
// }

// Output:

// Copy Code
// a & b = 1


// 2. Bitwise OR (|)

// Compares each bit of two integers and returns 1 if at least one of the bits is 1.

// A	B	A | B
// 0	0	0
// 0	1	1
// 1	0	1
// 1	1	1

// Example:

// c
// Copy Code
// #include <stdio.h>
// int main() {
//     int a = 5;  // Binary: 0101
//     int b = 3;  // Binary: 0011
//     int result = a | b;  // Binary: 0111 (Decimal: 7)
//     printf("a | b = %d\n", result);
//     return 0;
// }

// Output:

// Copy Code
// a | b = 7


// 3. Bitwise XOR (^)

// Compares each bit of two integers and returns 1 if the bits are different, otherwise 0.

// A	B	A ^ B
// 0	0	0
// 0	1	1
// 1	0	1
// 1	1	0

// Example:

// c
// Copy Code
// #include <stdio.h>
// int main() {
//     int a = 5;  // Binary: 0101
//     int b = 3;  // Binary: 0011
//     int result = a ^ b;  // Binary: 0110 (Decimal: 6)
//     printf("a ^ b = %d\n", result);
//     return 0;
// }

// Output:

// Copy Code
// a ^ b = 6


// 4. Bitwise NOT (~)

// Inverts all the bits of the number (i.e., changes 1 to 0 and 0 to 1).

// Example:

// c
// Copy Code
// #include <stdio.h>
// int main() {
//     int a = 5;  // Binary: 0101
//     int result = ~a;  // Binary: 11111111111111111111111111111010 (2's complement representation)
//     printf("~a = %d\n", result);
//     return 0;
// }

// Output:

// Copy Code
// ~a = -6


// Note: The result depends on the number of bits in the system's integer representation (e.g., 32-bit or 64-bit).




// 5. Left Shift (<<)

// Shifts the bits of a number to the left by a specified number of positions. Zeros are shifted into the least significant bit (LSB).
// This operation is equivalent to multiplying by powers of 2.

// Example:

// c
// Copy Code
// #include <stdio.h>
// int main() {
//     int a = 5;  // Binary: 0101
//     int result = a << 1;  // Binary: 1010 (Decimal: 10)
//     printf("a << 1 = %d\n", result);
//     return 0;
// }

// Output:

// Copy Code
// a << 1 = 10


// 6. Right Shift (>>)

// Shifts the bits of a number to the right by a specified number of positions.
// For unsigned numbers, zeros are shifted into the most significant bit (MSB).
// For signed numbers, the behavior depends on the compiler (it could fill with either 0 or the sign bit).

// Example:

// c
// Copy Code
// #include <stdio.h>
// int main() {
//     int a = 8;  // Binary: 1000
//     int result = a >> 1;  // Binary: 0100 (Decimal: 4)
//     printf("a >> 1 = %d\n", result);
//     return 0;
// }

// Output:

// Copy Code
// a >> 1 = 4


// Applications of Bitwise Operators

// Checking if a Number is Odd or Even:

// Use num & 1. If the result is 1, the number is odd; otherwise, it’s even.
// c
// Copy Code
// int num = 6;
// if (num & 1) {
//   printf("Odd\n");
// } else {
//   printf("Even\n");
// }
// Swapping Two Numbers Without a Temporary Variable (Using XOR):

// c
// Copy Code
// int a = 5, b = 3;
// a = a ^ b;
// b = a ^ b;
// a = a ^ b;
// Setting, Clearing, and Toggling Bits:

// Set a Bit: num = num | (1 << n); (Sets the nth bit to 1).
// Clear a Bit: num = num & ~(1 << n); (Sets the nth bit to 0).
// Toggle a Bit: num = num ^ (1 << n); (Flips the nth bit).
// Counting the Number of 1s in Binary:

// c
// Copy Code
// int count = 0;
// while (num) {
//     count += num & 1;
//     num >>= 1;
// }
// Checking if a Power of 2:

// A number is a power of 2 if num & (num - 1) == 0 (and num > 0).
// Extracting Specific Bits:

// Create a mask and use & and shifts to isolate specific bits.
// Reversing the Bits of a Number:

// Use shifts and masks to reverse the binary representation of a number.

#include<stdio.h>
int main()
{
    int num = 0x1122AABB;
    // int forth = (num & 0xFF)<<16;
    // int third = (num & 0x0000FF00)<<16;
    int second = (num & 0x0000FFFF)<<16;
    int first = (num & 0xFFFF0000)>>16;

    // printf("%08X\n",forth);
    // printf("%08X\n",third);
    printf("%08X\n",second);
    printf("%08X\n",first);

    int result = ( (first) | (second) );

    printf("%X",result);

    return 0;
}

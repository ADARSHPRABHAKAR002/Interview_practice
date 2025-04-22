// 1. Pass by Value

// In pass by value, the function is given a copy of the actual data (the value of the variable). Any changes made to the parameter inside the function do not affect the original variable in the calling scope.


// Key Characteristics:

// Copy of Data: The function operates on a copy of the value, not the original variable.
// Original Variable Unchanged: Changes inside the function do not affect the original variable.
// Safer: No risk of accidentally modifying the calling variable.

#include <stdio.h>

void modifyValue(int x) {
    x = x * 2;  // Modifies the local copy of x
    printf("Inside modifyValue: x = %d\n", x);
}

int main() {
    int a = 10;
    printf("Before modifyValue: a = %d\n", a);
    modifyValue(a);  // Pass by value
    printf("After modifyValue: a = %d\n", a);  // Original 'a' remains unchanged
    return 0;
}

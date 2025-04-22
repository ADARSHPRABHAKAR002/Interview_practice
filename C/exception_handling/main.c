// Custom Exception-like Macros

#include <stdio.h>
#include <setjmp.h>

jmp_buf buf;

#define TRY if (setjmp(buf) == 0)
#define CATCH else
#define THROW longjmp(buf, 1);

void riskyFunction() {
    printf("Executing risky code...\n");
    THROW;  // Simulate an exception
}

int main() {
    TRY {
        printf("Trying...\n");
        riskyFunction();
        printf("This will not execute.\n");
    }
    CATCH {
        printf("Caught an exception!\n");
    }

    return 0;
}
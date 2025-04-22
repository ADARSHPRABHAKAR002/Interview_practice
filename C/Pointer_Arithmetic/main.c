// 2. Pointer Arithmetic

// Pointer arithmetic refers to performing operations like addition, subtraction, increment, and decrement on pointers.
// Pointer arithmetic is possible because pointers store the memory address of variables, and these operations modify 
// the address based on the size of the data type the pointer points to.

#include<stdio.h>
int main(){
    int arr[] = {1,2,3,4,5,6};

    int *ptr = arr;

    printf("%d\n",*ptr);
    ptr+=2;
    printf("%d\n",*ptr);
}
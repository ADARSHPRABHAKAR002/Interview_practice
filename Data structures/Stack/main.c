// Stack Data Structure in C

// A stack is a linear data structure that follows the LIFO (Last In, First Out) principle, meaning the last element added to the stack is the first one to be removed.


// Key Features of a Stack

// Push: Add an element to the top of the stack.
// Pop: Remove the top element from the stack.
// Peek/Top: Retrieve the top element without removing it.
// IsEmpty: Check if the stack is empty.
// IsFull: Check if the stack is full (for arrays).

// Stacks can be implemented in C using arrays or linked lists. Below, we will explore both implementations.



// 1. Stack Implementation Using Arrays

// Stack implemented using arrays has a fixed size, meaning the stack can hold a limited number of elements.

#include <stdio.h>
#include <stdlib.h>
#define MAX 5  // Maximum size of the stack

// Stack structure
typedef struct Stack {
    int arr[MAX];  // Array to hold stack elements
    int top;       // Index of the top element
} Stack;

// Initialize the stack
void initStack(Stack* stack) {
    stack->top = -1;  // Initialize top to -1
}

// Check if the stack is empty
int isEmpty(Stack* stack) {
    return stack->top == -1;
}

// Check if the stack is full
int isFull(Stack* stack) {
    return stack->top == MAX - 1;
}

// Push an element onto the stack
void push(Stack* stack, int value) {
    if (isFull(stack)) {
        printf("Stack Overflow!\n");
        return;
    }
    stack->arr[++stack->top] = value;  // Increment top and add value
    printf("Pushed %d onto the stack.\n", value);
}

// Pop an element from the stack
int pop(Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack Underflow!\n");
        return -1;  // Return -1 for empty stack
    }
    return stack->arr[stack->top--];  // Return top element and decrement top
}

// Peek the top element of the stack
int peek(Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty!\n");
        return -1;
    }
    return stack->arr[stack->top];  // Return the top element
}

// Display the stack
void display(Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty!\n");
        return;
    }
    printf("Stack elements: ");
    for (int i = stack->top; i >= 0; i--) {
        printf("%d ", stack->arr[i]);
    }
    printf("\n");
}

int main() {
    Stack stack;
    initStack(&stack);  // Initialize the stack

    push(&stack, 10);
    push(&stack, 20);
    push(&stack, 30);

    display(&stack);

    printf("Top element: %d\n", peek(&stack));

    printf("Popped element: %d\n", pop(&stack));
    printf("Popped element: %d\n", pop(&stack));

    display(&stack);

    return 0;
}


//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

// 2. Stack Implementation Using Linked List

// In a linked list implementation, the stack does not have a fixed size. It dynamically allocates memory for each element, making it more flexible than an array-based stack.

// #include <stdio.h>
// #include <stdlib.h>

// // Node structure for linked list
// typedef struct Node {
//     int data;
//     struct Node* next;
// } Node;

// // Push an element onto the stack
// void push(Node** top, int value) {
//     Node* newNode = (Node*)malloc(sizeof(Node));  // Allocate memory
//     if (!newNode) {
//         printf("Stack Overflow!\n");
//         return;
//     }
//     newNode->data = value;
//     newNode->next = *top;
//     *top = newNode;  // Update top pointer
//     printf("Pushed %d onto the stack.\n", value);
// }

// // Pop an element from the stack
// int pop(Node** top) {
//     if (*top == NULL) {
//         printf("Stack Underflow!\n");
//         return -1;  // Stack is empty
//     }
//     Node* temp = *top;
//     int poppedValue = temp->data;
//     *top = (*top)->next;  // Update top pointer
//     free(temp);           // Free memory
//     return poppedValue;
// }

// // Peek the top element of the stack
// int peek(Node* top) {
//     if (top == NULL) {
//         printf("Stack is empty!\n");
//         return -1;
//     }
//     return top->data;  // Return the top element
// }

// // Display the stack
// void display(Node* top) {
//     if (top == NULL) {
//         printf("Stack is empty!\n");
//         return;
//     }
//     printf("Stack elements: ");
//     while (top != NULL) {
//         printf("%d ", top->data);
//         top = top->next;
//     }
//     printf("\n");
// }

// int main() {
//     Node* stack = NULL;  // Initialize top as NULL

//     push(&stack, 10);
//     push(&stack, 20);
//     push(&stack, 30);

//     display(stack);

//     printf("Top element: %d\n", peek(stack));

//     printf("Popped element: %d\n", pop(&stack));
//     printf("Popped element: %d\n", pop(&stack));

//     display(stack);

//     return 0;
// }

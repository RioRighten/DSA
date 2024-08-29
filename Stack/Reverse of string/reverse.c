#include <stdio.h>
#include <string.h>
#define MAX 100 

char stack[MAX];
int top = -1;  

// Function to push a character onto the stack
void push(char c) {
    if (top == MAX - 1) {
        printf("Stack Overflow! Cannot push '%c'\n", c);
    } else {
        top++;
        stack[top] = c;
    }
}

// Function to pop a character from the stack
char pop() {
    if (top == -1) {
        printf("Stack Underflow! Cannot pop.\n");
        return '\0';  
    } else {
        char c = stack[top];
        top--;
        return c;
    }
}

// Function to reverse the string using the stack
void reverseString(char str[]) {
    int length = strlen(str); 

    for (int i = 0; i < length; i++) {
        push(str[i]);
    }

    for (int i = 0; i < length; i++) {
        str[i] = pop();
    }
}

int main() {
    char str[MAX];

    printf("Enter a string: ");
    fgets(str, MAX, stdin);
    str[strcspn(str, "\n")] = '\0';
    reverseString(str);
    printf("Reversed string: %s\n", str);

    return 0;
}

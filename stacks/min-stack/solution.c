#include <stdio.h>
#include <limits.h>

#define MAX 100

typedef struct {
    int values[MAX];
    int minValues[MAX];
    int top;
} MinStack;

void push(MinStack* stack, int value) {
    stack->top++;

    stack->values[stack->top] = value;

    if (stack->top == 0) {
        stack->minValues[stack->top] = value;
    } else {
        int previousMin = stack->minValues[stack->top - 1];

        if (value < previousMin) {
            stack->minValues[stack->top] = value;
        } else {
            stack->minValues[stack->top] = previousMin;
        }
    }
}

void pop(MinStack* stack) {
    if (stack->top >= 0) {
        stack->top--;
    }
}

int top(MinStack* stack) {
    return stack->values[stack->top];
}

int getMin(MinStack* stack) {
    return stack->minValues[stack->top];
}

int main() {

    // Test Case 1: Typical case
    MinStack stack1;
    stack1.top = -1;

    push(&stack1, -2);
    push(&stack1, 0);
    push(&stack1, -3);

    printf("Test Case 1: Minimum = %d\n", getMin(&stack1));

    pop(&stack1);

    printf("Test Case 1: Top after pop = %d\n", top(&stack1));
    printf("Test Case 1: Minimum after pop = %d\n", getMin(&stack1));

    // Test Case 2: Edge case - single element
    MinStack stack2;
    stack2.top = -1;

    push(&stack2, 5);

    printf("Test Case 2: Minimum = %d\n", getMin(&stack2));

    return 0;
}
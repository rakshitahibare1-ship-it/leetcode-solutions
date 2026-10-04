#include <stdio.h>
#include <string.h>

int isValid(char s[]) {
    char stack[10000];
    int top = -1;

    for (int i = 0; s[i] != '\0'; i++) {

        if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
            stack[++top] = s[i];
        }
        else {
            if (top == -1) {
                return 0;
            }

            char opening = stack[top--];

            if ((s[i] == ')' && opening != '(') ||
                (s[i] == ']' && opening != '[') ||
                (s[i] == '}' && opening != '{')) {
                return 0;
            }
        }
    }

    return top == -1;
}

int main() {

    // Test Case 1: Typical case
    char s1[] = "()[]{}";

    if (isValid(s1)) {
        printf("Test Case 1: Valid parentheses\n");
    } else {
        printf("Test Case 1: Invalid parentheses\n");
    }

    // Test Case 2: Edge case
    char s2[] = "(]";

    if (isValid(s2)) {
        printf("Test Case 2: Valid parentheses\n");
    } else {
        printf("Test Case 2: Invalid parentheses\n");
    }

    return 0;
}
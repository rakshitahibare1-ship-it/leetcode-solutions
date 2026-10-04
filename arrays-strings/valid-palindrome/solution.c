#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isPalindrome(char str[]) {
    int left = 0;
    int right = strlen(str) - 1;

    while (left < right) {

        // Skip non-alphanumeric characters
        while (left < right && !isalnum(str[left])) {
            left++;
        }

        while (left < right && !isalnum(str[right])) {
            right--;
        }

        // Compare characters ignoring case
        if (tolower(str[left]) != tolower(str[right])) {
            return 0;
        }

        left++;
        right--;
    }

    return 1;
}

int main() {

    // Test Case 1: Typical case
    char str1[] = "A man, a plan, a canal: Panama";

    if (isPalindrome(str1)) {
        printf("Test Case 1: Palindrome\n");
    } else {
        printf("Test Case 1: Not a palindrome\n");
    }

    // Test Case 2: Edge case
    char str2[] = " ";

    if (isPalindrome(str2)) {
        printf("Test Case 2: Palindrome\n");
    } else {
        printf("Test Case 2: Not a palindrome\n");
    }

    return 0;
}
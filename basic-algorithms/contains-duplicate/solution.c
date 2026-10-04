#include <stdio.h>

int containsDuplicate(int nums[], int n) {

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {

            if (nums[i] == nums[j]) {
                return 1;
            }
        }
    }

    return 0;
}

int main() {

    // Test Case 1: Typical case
    int nums1[] = {1, 2, 3, 1};
    int n1 = 4;

    if (containsDuplicate(nums1, n1)) {
        printf("Test Case 1: Duplicate found\n");
    } else {
        printf("Test Case 1: No duplicate\n");
    }

    // Test Case 2: Edge case - no duplicates
    int nums2[] = {1, 2, 3, 4};
    int n2 = 4;

    if (containsDuplicate(nums2, n2)) {
        printf("Test Case 2: Duplicate found\n");
    } else {
        printf("Test Case 2: No duplicate\n");
    }

    return 0;
}
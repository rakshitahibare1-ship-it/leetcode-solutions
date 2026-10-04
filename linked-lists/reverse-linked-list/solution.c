#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode* next;
};

struct ListNode* createNode(int value) {
    struct ListNode* newNode =
        (struct ListNode*)malloc(sizeof(struct ListNode));

    newNode->val = value;
    newNode->next = NULL;

    return newNode;
}

struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode* previous = NULL;
    struct ListNode* current = head;

    while (current != NULL) {
        struct ListNode* nextNode = current->next;

        current->next = previous;
        previous = current;
        current = nextNode;
    }

    return previous;
}

void printList(struct ListNode* head) {
    while (head != NULL) {
        printf("%d", head->val);

        if (head->next != NULL)
            printf(" -> ");

        head = head->next;
    }

    printf("\n");
}

int main() {

    // Test Case 1: 1 -> 2 -> 3 -> 4 -> 5
    struct ListNode* head1 = createNode(1);
    head1->next = createNode(2);
    head1->next->next = createNode(3);
    head1->next->next->next = createNode(4);
    head1->next->next->next->next = createNode(5);

    printf("Test Case 1: Original = ");
    printList(head1);

    head1 = reverseList(head1);

    printf("Test Case 1: Reversed = ");
    printList(head1);


    // Test Case 2: Single node
    struct ListNode* head2 = createNode(1);

    printf("Test Case 2: Original = ");
    printList(head2);

    head2 = reverseList(head2);

    printf("Test Case 2: Reversed = ");
    printList(head2);

    return 0;
}
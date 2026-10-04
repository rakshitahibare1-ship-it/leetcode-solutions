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

struct ListNode* mergeTwoLists(
    struct ListNode* list1,
    struct ListNode* list2
) {
    struct ListNode dummy;
    struct ListNode* current = &dummy;

    dummy.next = NULL;

    while (list1 != NULL && list2 != NULL) {
        if (list1->val <= list2->val) {
            current->next = list1;
            list1 = list1->next;
        } else {
            current->next = list2;
            list2 = list2->next;
        }

        current = current->next;
    }

    if (list1 != NULL)
        current->next = list1;
    else
        current->next = list2;

    return dummy.next;
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

    // Test Case 1
    struct ListNode* list1 = createNode(1);
    list1->next = createNode(2);
    list1->next->next = createNode(4);

    struct ListNode* list2 = createNode(1);
    list2->next = createNode(3);
    list2->next->next = createNode(4);

    printf("Test Case 1: List 1 = ");
    printList(list1);

    printf("Test Case 1: List 2 = ");
    printList(list2);

    struct ListNode* result1 = mergeTwoLists(list1, list2);

    printf("Test Case 1: Merged = ");
    printList(result1);


    // Test Case 2
    struct ListNode* list3 = NULL;
    struct ListNode* list4 = createNode(0);

    struct ListNode* result2 = mergeTwoLists(list3, list4);

    printf("Test Case 2: Merged = ");
    printList(result2);

    return 0;
}
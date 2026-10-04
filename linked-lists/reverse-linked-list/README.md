# Reverse Linked List

## Problem
Given the head of a singly linked list, reverse the list and return the reversed list.

## Difficulty
Easy

## Topic
Linked Lists

## LeetCode
https://leetcode.com/problems/reverse-linked-list/

## Approach
Use three pointers:
- `previous` stores the previous node.
- `current` stores the current node.
- `nextNode` temporarily stores the next node.

For each node, reverse its `next` pointer to point to the previous node.

## Test Cases

### Test Case 1
Input:
```text
1 -> 2 -> 3 -> 4 -> 5
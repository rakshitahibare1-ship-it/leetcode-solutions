# Merge Two Sorted Lists

## Problem
Merge two sorted linked lists into one sorted linked list.

## Difficulty
Easy

## Topic
Linked Lists

## LeetCode
https://leetcode.com/problems/merge-two-sorted-lists/

## Approach
Use a dummy node and a pointer to construct the merged list.

Compare the current nodes of both lists and attach the smaller node to the result. Continue until one list is empty, then attach the remaining nodes.

## Test Cases

### Test Case 1
Input:
- List 1: 1 -> 2 -> 4
- List 2: 1 -> 3 -> 4

Output:
1 -> 1 -> 2 -> 3 -> 4 -> 4

### Test Case 2
Input:
- List 1: empty
- List 2: 0

Output:
0

## Complexity
- Time: O(n + m)
- Space: O(1)

## Learning Outcome
Learned how to merge two sorted linked lists using pointer manipulation.
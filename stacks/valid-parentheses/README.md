# Valid Parentheses

**Difficulty:** Easy

**Topic:** Stacks

**LeetCode:** https://leetcode.com/problems/valid-parentheses/

## Problem Description

Given a string containing the characters `()`, `[]`, and `{}`, determine
whether the brackets are valid.

A valid string must have matching opening and closing brackets in the
correct order.

## Approach

I used a stack.

1. When an opening bracket is found, push it onto the stack.
2. When a closing bracket is found, check the top of the stack.
3. If the brackets match, remove the opening bracket from the stack.
4. If they do not match, the string is invalid.
5. At the end, the stack must be empty for the string to be valid.

## Test Cases

### Test Case 1 — Typical Case

```text
Input:
"()[]{}"

Output:
Valid parentheses
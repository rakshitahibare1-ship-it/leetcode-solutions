# Min Stack

## Problem
Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.

## Difficulty
Medium

## Topic
Stacks

## LeetCode
https://leetcode.com/problems/min-stack/

## Approach
Two arrays are used:
- `values[]` stores the stack elements.
- `minValues[]` stores the minimum value at each stack position.

Whenever a value is pushed, the minimum value up to that position is also stored.

This allows `getMin()` to return the minimum element in O(1) time.

## Test Cases

### Test Case 1
Operations:
- Push -2
- Push 0
- Push -3
- Get minimum
- Pop
- Top
- Get minimum

Expected Output:
```text
Minimum = -3
Top after pop = 0
Minimum after pop = -2
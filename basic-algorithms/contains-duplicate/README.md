# Contains Duplicate

**Difficulty:** Easy

**Topic:** Basic Algorithms

**LeetCode:** https://leetcode.com/problems/contains-duplicate/

## Problem Description

Given an integer array, determine whether any value appears at least twice.

Return `true` if a duplicate exists and `false` if every element is unique.

## Approach

I used a brute-force approach.

1. Select one element from the array.
2. Compare it with every element after it.
3. If two elements are equal, a duplicate exists.
4. If no equal pair is found, there are no duplicates.

## Test Cases

### Test Case 1 — Typical Case

```text
Input:
nums = [1, 2, 3, 1]

Output:
Duplicate found
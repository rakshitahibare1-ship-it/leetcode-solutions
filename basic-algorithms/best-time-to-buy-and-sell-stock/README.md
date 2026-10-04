# Best Time to Buy and Sell Stock

**Difficulty:** Easy

**Topic:** Basic Algorithms

**LeetCode:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

## Problem Description

Given an array where `prices[i]` represents the price of a stock on day `i`,
find the maximum profit that can be achieved by buying on one day and selling
on a later day.

If no profit can be made, return `0`.

## Approach

I used a single-pass approach.

1. Keep track of the minimum stock price seen so far.
2. For each day, calculate the profit that would be obtained by selling on
   that day.
3. Keep track of the maximum profit.
4. Update the minimum price whenever a lower price is found.

## Test Cases

### Test Case 1 — Typical Case

```text
Input:
prices = [7,1,5,3,6,4]

Output:
5
## Problem: Valid Parentheses (Easy)

**Link:** https://leetcode.com/problems/valid-parentheses/

### Approach

I used a stack to keep track of opening brackets.
For every closing bracket, I checked whether it matches the most recent opening bracket.

### Complexity

- Time: O(n)
- Space: O(n)

### Notes

Tested a valid bracket case and an invalid bracket case.
The solution was accepted on LeetCode.
## Problem: Longest Common Prefix (Easy)

**Link:** https://leetcode.com/problems/longest-common-prefix/

### Approach

I took the first string as the initial prefix.
Then I compared it with each string and shortened the prefix until it matched.

### Complexity

- Time: O(n × m)
- Space: O(1)

### Notes

Tested a normal case and a case where there is no common prefix.
The solution was accepted on LeetCode.
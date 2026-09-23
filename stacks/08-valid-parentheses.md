## Problem: Valid Parentheses (Easy)

**Link:** https://leetcode.com/problems/valid-parentheses/

### Approach
Use a stack for opening brackets. When a closing bracket appears, compare it with the most recent opening bracket. The string is valid only when all brackets match and the stack is empty at the end.

### Complexity
- Time: O(n)
- Space: O(n)

### Notes
An early closing bracket with an empty stack makes the string invalid.

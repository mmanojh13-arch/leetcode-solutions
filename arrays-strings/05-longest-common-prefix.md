## Problem: Longest Common Prefix (Easy)

**Link:** https://leetcode.com/problems/longest-common-prefix/

### Approach
Use the first string as the current prefix and compare each character with the same position in all other strings. Stop when a mismatch or end of a string is found.

### Complexity
- Time: O(S), where S is the total number of characters checked
- Space: O(1) extra space

### Notes
If the first characters do not match, the common prefix is an empty string.

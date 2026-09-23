## Problem: Binary Search (Easy)

**Link:** https://leetcode.com/problems/binary-search/

### Approach
Because the array is sorted, check the middle element. If the target is larger, search the right half; otherwise search the left half.

### Complexity
- Time: O(log n)
- Space: O(1)

### Notes
The array must be sorted for binary search to work correctly.

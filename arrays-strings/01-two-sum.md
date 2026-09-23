## Problem: Two Sum (Easy)

**Link:** https://leetcode.com/problems/two-sum/

### Approach
Check every pair of numbers and compare their sum with the target. When a matching pair is found, return their indices.

### Complexity
- Time: O(n²)
- Space: O(1) excluding the returned array

### Notes
The returned indices are different, so the second loop starts from `i + 1`.

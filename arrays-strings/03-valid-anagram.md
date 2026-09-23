## Problem: Valid Anagram (Easy)

**Link:** https://leetcode.com/problems/valid-anagram/

### Approach
Count how many times each character appears in both strings. If all character counts become zero after adding the first string and subtracting the second, the strings are anagrams.

### Complexity
- Time: O(n)
- Space: O(1) because the character-count array has fixed size 256

### Notes
The lengths must be equal before comparing character counts.

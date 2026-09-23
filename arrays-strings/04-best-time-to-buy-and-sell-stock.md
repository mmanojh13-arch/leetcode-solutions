## Problem: Best Time to Buy and Sell Stock (Easy)

**Link:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

### Approach
Keep the lowest price seen so far. For every later price, calculate the possible profit and keep the largest profit.

### Complexity
- Time: O(n)
- Space: O(1)

### Notes
If prices only decrease, the answer is 0 because no profitable transaction is possible.

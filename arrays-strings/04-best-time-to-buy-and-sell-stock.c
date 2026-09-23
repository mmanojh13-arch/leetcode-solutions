#include <stdio.h>

/* LeetCode solution */
int maxProfit(int* prices, int pricesSize) {
    if (pricesSize < 2) {
        return 0;
    }

    int minPrice = prices[0];
    int maxProfitValue = 0;

    for (int i = 1; i < pricesSize; i++) {
        if (prices[i] < minPrice) {
            minPrice = prices[i];
        }

        int profit = prices[i] - minPrice;
        if (profit > maxProfitValue) {
            maxProfitValue = profit;
        }
    }

    return maxProfitValue;
}

/* Local tests:
   Typical: [7,1,5,3,6,4] -> 5
   Edge: [7,6,4,3,1] -> 0
*/
int main(void) {
    int prices1[] = {7, 1, 5, 3, 6, 4};
    printf("Test 1: %d\n", maxProfit(prices1, 6));

    int prices2[] = {7, 6, 4, 3, 1};
    printf("Test 2: %d\n", maxProfit(prices2, 5));

    return 0;
}

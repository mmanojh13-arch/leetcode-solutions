#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& prices) {
    int minPrice = INT_MAX, profit = 0;
    for (int price : prices) {
        minPrice = min(minPrice, price);
        profit = max(profit, price - minPrice);
    }
    return profit;
}

int main() {
    vector<int> a = {7,1,5,3,6,4};
    cout << maxProfit(a) << "\n";

    vector<int> b = {7,6,4,3,1};
    cout << maxProfit(b) << "\n";
    return 0;
}
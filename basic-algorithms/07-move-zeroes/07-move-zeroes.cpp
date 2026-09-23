#include <bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int>& nums) {
    int pos = 0;
    for (int x : nums)
        if (x != 0) nums[pos++] = x;

    while (pos < (int)nums.size())
        nums[pos++] = 0;
}

void print(vector<int>& a) {
    for (int x : a) cout << x << " ";
    cout << "\n";
}

int main() {
    vector<int> a = {0,1,0,3,12};
    moveZeroes(a);
    print(a);

    vector<int> b = {0,0,1};
    moveZeroes(b);
    print(b);
    return 0;
}
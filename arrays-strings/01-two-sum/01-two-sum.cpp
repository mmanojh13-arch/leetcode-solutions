#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> mp;
    for (int i = 0; i < (int)nums.size(); i++) {
        int need = target - nums[i];
        if (mp.count(need)) return {mp[need], i};
        mp[nums[i]] = i;
    }
    return {};
}

int main() {
    vector<int> a = {2, 7, 11, 15};
    for (int x : twoSum(a, 9)) cout << x << " ";
    cout << "\n";

    vector<int> b = {3, 3};
    for (int x : twoSum(b, 6)) cout << x << " ";
    cout << "\n";
    return 0;
}
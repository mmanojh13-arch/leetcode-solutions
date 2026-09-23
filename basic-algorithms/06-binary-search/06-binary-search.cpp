#include <bits/stdc++.h>
using namespace std;

int search(vector<int>& nums, int target) {
    int left = 0, right = (int)nums.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] == target) return mid;
        if (nums[mid] < target) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}

int main() {
    vector<int> a = {1,2,3,4,5};
    cout << search(a, 4) << "\n";
    cout << search(a, 9) << "\n";
    return 0;
}
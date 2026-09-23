#include <bits/stdc++.h>
using namespace std;

void reverseString(vector<char>& s) {
    reverse(s.begin(), s.end());
}

int main() {
    vector<char> a = {'h','e','l','l','o'};
    reverseString(a);
    for (char c : a) cout << c;
    cout << "\n";

    vector<char> b = {'H'};
    reverseString(b);
    for (char c : b) cout << c;
    cout << "\n";
    return 0;
}
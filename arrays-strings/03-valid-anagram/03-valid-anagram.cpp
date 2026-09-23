#include <bits/stdc++.h>
using namespace std;

bool isAnagram(string s, string t) {
    if (s.size() != t.size()) return false;
    int count[26] = {};
    for (char c : s) count[c - 'a']++;
    for (char c : t) count[c - 'a']--;
    for (int x : count) if (x != 0) return false;
    return true;
}

int main() {
    cout << (isAnagram("anagram", "nagaram") ? "true" : "false") << "\n";
    cout << (isAnagram("rat", "car") ? "true" : "false") << "\n";
    return 0;
}
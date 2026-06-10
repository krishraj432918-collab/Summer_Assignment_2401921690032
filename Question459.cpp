#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string doubled = s + s;
        string trimmed = doubled.substr(1, doubled.size() - 2);
        return trimmed.find(s) != string::npos;
    }
};

int main() {
    Solution sol;

    // Test cases
    cout << boolalpha; 
    cout << "abab -> " << sol.repeatedSubstringPattern("abab") << endl;
    cout << "aba -> " << sol.repeatedSubstringPattern("aba") << endl;
    cout << "abcabcabcabc -> " << sol.repeatedSubstringPattern("abcabcabcabc") << endl;

    return 0;
}


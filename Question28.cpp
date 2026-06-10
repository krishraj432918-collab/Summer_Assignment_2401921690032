#include <iostream>
#include <string>
using namespace std;

int strStr(string haystack, string needle) {
    int n = haystack.size();
    int m = needle.size();

    if(m == 0) return 0;

    for(int i = 0; i <= n - m; i++) {
        int j = 0;
        while(j < m && haystack[i + j] == needle[j]) {
            j++;
        }
        if(j == m) return i; // match mila
    }
    return -1; // nahi mila
}

int main() {
    string haystack = "sadbutsad";
    string needle = "sad";

    cout << strStr(haystack, needle) << endl; // Output: 0

    haystack = "leetcode";
    needle = "leeto";

    cout << strStr(haystack, needle) << endl; // Output: -1

    return 0;
}

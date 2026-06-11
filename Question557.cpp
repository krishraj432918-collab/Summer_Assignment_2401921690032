#include <bits/stdc++.h>
using namespace std;

string reverseWords(string s) {
    int start = 0;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == ' ') {
            reverse(s.begin() + start, s.begin() + i);
            start = i + 1;
        }
    }
    
    reverse(s.begin() + start, s.end());
    return s;
}

int main() {
    string s1 = "Let's take LeetCode contest";
    string s2 = "Mr Ding";
    
    cout << reverseWords(s1) << endl; // s'teL ekat edoCteeL tsetnoc
    cout << reverseWords(s2) << endl; // rM gniD
}

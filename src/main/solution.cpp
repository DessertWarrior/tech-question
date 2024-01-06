#include <string>
#include <stack>
#include <iostream>
using namespace std;
class Solution {
public:
    bool backspaceCompare(string s, string t) {
        // if # remove 1 character
        // we use stack
        stack<char>s1,s2;
        // s stack
        for (int i = 0; i< s.length(); i++) {
            if (s[i] == '#') {
                if (!s1.empty())
                    s1.pop();
            }
            else {
                s1.push(s[i]);
            }
        }

        // t stack
        for (int i = 0; i< t.length(); i++) {
            if (t[i] == '#') {
                if (!s2.empty())
                    s2.pop();
            }
            else {
                s2.push(t[i]);
            }
        }

        // compare two strings
        while (s1.size() == s2.size()) {
            if (s1.empty() && s2.empty()) {
                return true;
            }
            else if (s1.top() == s2.top()) {
                s1.pop();
                s2.pop();
            }
            else {
                return false;
            }
        }
        return false;
    }
};
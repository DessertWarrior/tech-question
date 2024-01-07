#include <string>
#include <stack>
#include <iostream>
#include <vector>
#include <map>
using namespace std;
class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        stack.push(s[0]);   //first character

        for (int i = 1; i < s.length(); i ++) {
            
            if (stack.empty())
                stack.push(s[i]);
            else if (stack.top() == '(' && s[i] == ')')
                stack.pop();
            else if(stack.top() == '[' && s[i] == ']')
                stack.pop();
            else if (stack.top() == '{' && s[i] == '}')
                stack.pop();
            else
                stack.push(s[i]);
        }

        //once operation is complete and theres any remainder
        if (!stack.empty()) 
            return false;
        return true;
    }
};
#include <string>
#include <stack>
#include <iostream>
using namespace std;
class Solution {
public:
    int scoreOfParentheses(string s) {
        int num = 0;
        stack<string>stack;
        stack.push("(");
        // assign 1 to stack, since there"s at least one ().
        // getting the next character
        // if the character is ( and prev
        for (int i = 1; i < s.length(); i++) {
            // if it forms a full parenthesis
            if (stack.top() == "(" && s[i]== ')') {
                stack.top() = "1";
            }
            // if its a closing parenthesis and it has number before it
            else if (s[i] == ')' && stack.top()!= "(" && stack.top() != ")") {
                int temp = stoi(stack.top());
                stack.pop();

                // if the next element is also number
                while (stack.top()!= "(" && stack.top()!= ")") {
                    temp = stoi(stack.top()) + temp;
                    stack.pop();
                }
                // once it reaches (, remove it and * temp by 2
                stack.pop();
                temp *= 2;
                stack.push(to_string(temp));
                
            }
            else if (s[i]== '(')
                stack.push("(");
            
            // cout << stack.top() << endl;
        }
        while(stack.size() > 0) {
            num += stoi(stack.top());
            stack.pop();
        }
        return num;
    }
};
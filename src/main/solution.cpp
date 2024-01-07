#include <string>
#include <stack>
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int calPoints(vector<string>& operations) {
        // if index i is i th operation, apply to record 
        int total = 0;
        stack<int>stack;
        for (int i = 0; i < operations.size();i++) {
            if (operations[i] == "C")  {
                total -= stack.top();
                stack.pop();
            }
                
            else if (operations[i] == "D") {
                stack.push(stack.top()*2);
                total += stack.top();
            }
            else if (operations[i] == "+") {
                int first = stack.top();
                stack.pop();
                int plus = stack.top() + first;
                stack.push(first);
                stack.push(plus);
                total += plus;
            }   
            else {
                stack.push(stoi(operations[i]));
                total += stack.top();
            }
        }  
        return total; 
    };
};
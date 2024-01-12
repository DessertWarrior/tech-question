#include <string>
#include <stack>
#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <climits>
#include <unordered_map>
#include <algorithm>
using namespace std;
class Solution {
public:
    string reverseWords(string s) {
        //find first character, reach until the end,
        // store into the stack
        // print it
        string result = "";
        stack<char>wordIndices;
        for (int i = s.length()-1; i >= 0; i--) {
            if (s[i] == ' ' && wordIndices.size() != 0 && result != "") {
                result += " ";
            }
            //if isword is triggered and index currently is whitespace
            while (s[i] == ' ' && wordIndices.size() != 0) {
                result += wordIndices.top();
                wordIndices.pop();
            }
            if (s[i] != ' ') {
                wordIndices.push(s[i]);
            }
                
        }
        if (result != "" && wordIndices.size() != 0) {
            result += " ";
        }
        while(wordIndices.size() != 0) {
            result+= wordIndices.top();
            wordIndices.pop();
        }
        return result;
    }
};
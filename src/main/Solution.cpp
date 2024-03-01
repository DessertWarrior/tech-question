#include <vector>
#include <iostream>
using namespace std;
class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        vector<string>result;
        int textLength = -1;
        int start = 0;
        // possiblities: 1. word exceeds maxwidth
        //2. width matches maxwidth
        //3. reached last word.

        //find the indices of max width.
        for (int i = 0; i < words.size(); i++) {
            if (words[i].length()+ textLength + 1 > maxWidth) {
                result.push_back(reformat(words,maxWidth-textLength,start,i-1));
                start = i;
                textLength = words[i].length();
            }
            else {
                textLength += words[i].length() +1;
            }
        }
        //because the last row will not reach if statement. and also it has special rule.
        string lastRow= words[start];
        for (int i = start+1; i < words.size(); i ++) {
            lastRow += ' ' + words[i];
        }
        lastRow += string(maxWidth-lastRow.length(), ' ');
        result.push_back(lastRow);

        return result;
        //calculate the spaces required for the match.
    }
    string reformat(vector<string> & words, int extra, int start,int end) {
        if (start == end) return words[start] + string(extra,' ');

        int div = extra / (end- start)+1; 
        int remainder = extra % (end- start);
        
        string str = words[start];
        for (int i = start+1; i <=end; i ++) {         
            if (remainder >0)  {
                str += ' ';
                remainder--;
            }
            str += string(div,' ') + words[i]; 
        }
        return str;
    }
};
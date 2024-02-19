#include <vector>
#include <iostream>
using namespace std;
class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1) return s;

        //create number of rows of empty string
        vector<string> v(numRows,"");
        bool dir = false;    //true dir means moving forward
        int j = 0;
        for (int i = 0; i < s.length(); i++) {
            // if the j is at edge, change dir
            if (j == 0 || j == numRows-1) dir = !dir;
            v[j] += s[i];
            // moving positive dir
            if (dir) 
                j++;
            else 
                j--; 
        }

        //once all the row strings are assigned. we concat all vector strings
        string result = "";
        for (auto it : v) {
            result+= it;
        }
        return result;
    }
};
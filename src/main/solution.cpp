#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        for (int i = s.length()-1; i >= 0; i--) {
            if (s[i] != ' ') 
                count ++;
            else if  (s[i] == ' ' && count != 0)
                break;
        }
        return count;
    }
};
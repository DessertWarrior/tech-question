#include <string>
using namespace std;
class Solution {
public:
    int romanToInt(string s) {
        //constraints : 1 to 3999.
        //if range is between 1000 to 3999
        // base condition: s.length == 0
        int result = 0;
        for (int i = s.length()-1; i>= 0; i--) {
            if (s[i] == 'I') {
                if (result >= 5) 
                    result --;
                else
                    result ++;
            } 
            else if (s[i] == 'V') {
                result += 5;
            }
            else if (s[i] == 'X') {
                if (result >= 50)
                    result -= 10;
                else 
                    result += 10;
                //return romanToInt(s.substr(0,s.length-1));
            }
            else if (s[i] == 'L') {
                result += 50;
            }
            else if (s[i] == 'C') {
                if (result >= 500)
                    result -= 100;
                else 
                    result += 100;
                
            }
            else if (s[i] == 'D') {
                result += 500;
            }
            else if (s[i] == 'M') {
                result += 1000;
            }
        }
        return result;
    }
};
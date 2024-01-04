#include <string>
#include <cmath>
using namespace std;
class Solution {
public:
    string intToRoman(int num) {
        string symbols[] = {"I","V","X","L","C","D","M"};
        string result = "";

        for (int i = 0; i < log10(num)+1; i++) {
            string temp = "";
            int remainder = int(num/pow(10,i))%10;
            switch (remainder) {
                case 4:
                    temp = symbols[2 * i] + symbols[2 * i+1]; 
                    break;
                case 9:
                    temp = symbols[2 * i] + symbols[2 * (i+1)];
                    break;
                default:
                    if (remainder >= 5) {
                        remainder -= 5;
                        temp += symbols[2 * i+1];
                    }
                    while (remainder!= 0) {
                        remainder -= 1;
                        temp += symbols[2 * i];
                    }
            }
            result = temp + result;

        }
        return result;
        // base condition: s = 0
    //     if (num == 0) return "";
    //     //if num is bigger or equal than 1000
    //     if (num >= 1000)
    //         return "M" + intToRoman(num-1000);
    //     else if (num >= 900)
    //         return "CM" + intToRoman(num-900);
    //     else if (num >= 500) 
    //         return "D" + intToRoman(num-500);
    //     else if (num >= 400) 
    //         return "CD" + intToRoman(num-400);
    //     else if (num >= 100)
    //         return "C" + intToRoman(num- 100);
    //     else if (num >= 90)
    //         return "XC" + intToRoman(num-90);
    //     else if (num >= 50)
    //         return "L" + intToRoman(num-50);
    //     else if (num >= 40) 
    //         return "XL" + intToRoman(num-40);
    //     else if (num >= 10)
    //         return "X" + intToRoman(num-10);
    //     else if (num >= 9)
    //         return "IX" + intToRoman(num-9);
    //     else if (num >= 5)
    //         return "V" + intToRoman(num-5);
    //     else if (num >=4)
    //         return "IV" + intToRoman(num-4);
    //     else   
    //         return "I" + intToRoman(num-1);
    }
};
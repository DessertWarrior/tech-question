#include <stdio.h>
#include <string>
#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

string toFrench(long int num) {
    //125 - cent vingt-cinq
    //80 quatre-vingts (only 80 has the s)
    //81 quatre-vingt-un (only 81 doesnt have et un)
    //1 un
    //2 deux
    //3 trols
    //4 quatre
    //5 cing
    //6 six
    //7 sept
    //8 huit
    //9 neuf
    //10 dix
    // 1 to 20 are all unique.
    //21 to 69 unique 10s and add 1-10 rule
    //70 to 79 unique 10s and add 11-20 rule
    //80 itself is a new word
    //81 unique 10s and add 1-20 rule
    //100 cent
    //1000 un mille
    //1000000 un million
    string word = "";
    //amount of digits in num
    string val = to_string(num);
    // if num is in billions
    if (val.length() >= 10)
    {
        int b = stoi(val.substr(0,val.length()-9));
        word = toFrench(b) + ((b > 1) ?"milliards ":"milliard ");
        val = val.substr(val.length()-9,val.length()); //removing all the billions 
    }   

    // if num is in millions
    if (val.length() >= 7)
    {
        int m = stoi(val.substr(0,val.length()-6));
        if (m != 0)
            word += toFrench(m) + ((m > 1) ?"millions ":"million ");
        val = val.substr(val.length()-6,val.length()); //removing all the millions 
    }

    // if num is in thousands
    if (val.length() >= 4)
    {
        int t = stoi(val.substr(0,val.length()-3));
        if (t != 0)
            word += toFrench(t) + "mille ";
        val = val.substr(val.length()-3,val.length()); //removing all the thousands 
    }

    // if num is in hundreds
    if (val.length() == 3) 
    {
        int t = atoi(string(1, val[0]).c_str());
        if (t == 1) 
            word += "cent ";
        else if (t != 0)
            word += toFrench(t)+ "cent ";
        val = val.substr(1,val.length());
    }

    // condition between 0 to 99
    num = stoi(val);
    if (num > 80) 
    {
        if (num == 80) 
            word += "quantre-vingts ";
        else
            word += "quatre-vingt-";
        num-= 80;
    }
    else if (num > 20) 
    {
        if (num > 60) 
        {
            word += "saixante";
            num-= 60;
        }
        else if (num >= 50) 
        {
            word += "cinquante";
            num-= 50;
        }
        else if (num >= 40) 
        {
            word += "quarante";
            num-= 40;
        }
        else if (num >= 30) {
            word += "trente";
            num-= 30;
        }
        else {
            word += "vingt";
            num-= 20;
        }
        // check if its 1s
        if (num == 1) 
        {
            word += " et ";
        }
        else if (num != 0) 
        {
            word += "-";
        }
    }
    switch(num) {
        case 1: 
        word += "un ";
        break;
        case 2:
        word += "deux ";
        break;
        case 3:
        word += "trois ";
        break;
        case 4:
        word += "quatre ";
        break;
        case 5:
        word += "cinq ";
        break;
        case 6:
        word += "six ";
        break;
        case 7:
        word += "sept ";
        break;
        case 8:
        word += "huit ";
        break;
        case 9:
        word += "neuf ";
        break;
        case 10:
        word += "dix ";
        break;
        case 11:
        break;
        word += "onze ";
        break;
        case 12:
        word += "douze ";
        break;
        case 13:
        word += "treize ";
        break;
        case 14:
        word += "quatorze ";
        break;
        case 15:
        word += "quinze ";
        break;
        case 16:
        word += "seize ";
        break;
        case 17:
        word += "dix-sept ";
        break;
        case 18:
        word += "dix-huit ";
        break;
        case 19:
        word += "dix-neuf ";
        break;
        }

    return word;
}

int main(){
    cout<<toFrench(241251921334)<<endl;
}


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
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> anagrams;
        unordered_map<string, vector<string>> list;
        for (string str : strs) {
            string x = str;
            sort(x.begin(),x.end());
            //on creation if not exist, create new vector and push back.
            list[x].push_back(str);
        }
        //retrieve data from map to vector.
        for (auto l: list) {
            anagrams.push_back(l.second);
        }
        return anagrams;
    }
};
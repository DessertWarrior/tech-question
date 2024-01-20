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
    int candy(vector<int>& ratings) {
        int total = 1;
        int modifier = 1;
        int high = 0;
        int rMax = 1;
        for (int i =1; i < ratings.size(); i++) {
            if (ratings[i] > ratings[i-1]) {
                modifier++;
                high = 0;
                total += modifier;
                rMax= modifier;
            }
            else if (ratings[i] < ratings[i-1]) {
                modifier = 1;
                high ++;
                total += high;
                if (high >= rMax) {
                    total ++;
                }
            }
            else {
                modifier = 1;
                high = 0;
                rMax = modifier;
                total += modifier;

            }
        }
        return total;
        
    }
};
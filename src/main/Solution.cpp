#include <vector>
#include <iostream>
#include <stack>
using namespace std;
class Solution {
public: 
    int Trap(vector<int>& height) {
        if (height.size() <= 2) return 0;
        int total = 0;
        int right = height.size()-1;
        int left = 0;
        int lMax= -1 ,rMax = -1;    //declare it as -1 to initiate. so that index 0 and n-1 definitely assigns
        
        while (left < right) {
            // if current is bigger than lMax, replace
            lMax = max(lMax,height[left]);
            
            // if current is bigger than rMax, replace
            rMax = max(rMax,height[right]);
            // first find min of two max, add its side max and reduce current
            // image a cup, that has lmax, rmax, and current. 
            if (lMax < rMax) {
                total += lMax - height[left++];
            }
            else 
                total += rMax - height[right--];
            
        }
        return total;
    }
};
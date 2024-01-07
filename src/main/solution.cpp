#include <string>
#include <stack>
#include <iostream>
#include <vector>
#include <map>
using namespace std;
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>map;
        stack<int> stack;
        //get all the greater values inside map
        for (int i = 0; i < nums2.size(); i++) {
            // if there's any numbers thats pending to find greater value in stack
            while (!stack.empty() && stack.top() < nums2[i]) {
                // store the greater values and index inside map
                map[stack.top()] = nums2[i];
                //remove the top of stack
                stack.pop();
            }
            stack.push(nums2[i]);
        }

        for (int i = 0; i< nums1.size(); i++) {
            if (map[nums1[i]] != NULL) 
                nums1[i] = map[nums1[i]];
            else
                nums1[i] = -1;
        }

        return nums1;
    }
};
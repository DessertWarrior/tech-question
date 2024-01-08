#include <string>
#include <stack>
#include <iostream>
#include <vector>
#include <map>
#include <queue>
using namespace std;
/*
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        ListNode * cpA = headA;
        ListNode * cpB = headB;

        while (cpA != cpB) {
            if (cpA == nullptr)   cpA = headB;  //this ensures that both cpA and cpB share the same amount 
            else    cpA = cpA->next;

            if (cpB == nullptr)     cpB = headA;
            else    cpB = cpB->next;
        }
        return cpA;
    }
};
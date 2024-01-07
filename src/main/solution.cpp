#include <string>
#include <stack>
#include <iostream>
#include <vector>
#include <map>
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
class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *head = l1;
        ListNode *prev = l1;
        // store l1 into the stack,
        int addup = 0;
        while (l1 != nullptr && l2 != nullptr)
        {
            int digit = l1->val + l2->val + addup;
            addup = digit / 10;
            l1->val = digit % 10;

            prev = l1; // last valid l1
            l1 = l1->next;
            l2 = l2->next;
        }
        // theres a chance of 1 addup plus digit 9
        while (l1 != nullptr)
        {
            int digit = l1->val + addup;
            addup = digit / 10;
            l1->val = digit % 10;
            prev = l1;
            l1 = l1->next;
        }

        // since l1 become nullptr. we need to move current l2 to l1
        if (l2 != nullptr)
        {
            prev->next = l2;

            while (prev->next != nullptr)
            {
                prev = prev->next;
                int digit = prev->val + addup;
                addup = digit / 10;
                prev->val = digit % 10; 
            }
        }

        //if there is still addup, we need to add a new node
        if (addup == 1) 
            prev->next = new ListNode(1);

        return head;
    }
};
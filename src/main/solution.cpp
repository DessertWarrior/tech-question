#include <string>
#include <stack>
#include <iostream>
using namespace std;
/**
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
    ListNode(int x, ListNode *node) : val(x), next(node) {}
};

class Solution
{
public:
    ListNode *sortList(ListNode *head)
    {
        ListNode *low = head;
        ListNode *high = head;
        // stores prev of low memory
        ListNode *temp = head;
        // we can accomplish mergesort by having high going right twice
        if (head == nullptr || head->next == nullptr)
            return head;

        // ensure that when we do high->next->next won't encounter high->next == nullptr and cause runtime error
        while (high != nullptr && high->next != nullptr)
        {
            temp = low;
            low = low->next;
            high = high->next->next;
        }
        // make the next of prev null, we will use it as the sort low end.
        temp->next = nullptr;  
        ListNode *l1 = sortList(head);
        ListNode *l2 = sortList(low);
        return merge(l1, l2);
    };
    ListNode *merge(ListNode *l1, ListNode *l2)
    {
        ListNode *sorted = new ListNode();
        ListNode *result = sorted;
        while (l1 != nullptr && l2 != nullptr)
        {
            if (l1->val > l2->val)
            {
                result->next = l2;
                l2= l2->next;
            }
            else
            {

                result->next = l1;
                l1 = l1->next;
            }
            result = result->next;
        }
        // if any of the list is reaching end, we check if the other one is end
        if (l1 != nullptr)
        {
            result->next = l1;
        }
        else if (l2 != nullptr) {
            result->next = l2;
        }

        return sorted->next;
    }
};

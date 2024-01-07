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
struct ListNode {
    int val;
    ListNode* next;
    ListNode():val(0),next(nullptr) {};
    ListNode(int x): val(x),next(nullptr) {};
    ListNode(int x, ListNode* next): val(x),next(next) {};
};
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if (lists.size() == 0) {
            return nullptr;
        }
        //check first element of all first, and next and so on.
        

        while (lists.size() != 1) {
            int size = lists.size();
            ListNode* temp =merge(lists[size-2],lists.back()); 
            lists.pop_back();
            lists.back() = temp;

        }
        return lists[0];

    }
    ListNode* merge(ListNode* l1, ListNode* l2) {
        ListNode* result = new ListNode();
        ListNode* head = result;    //clone same address for return.
        while (l1 != nullptr && l2 != nullptr) {
            if (l1->val < l2->val) {
                result->next = l1;
                l1 = l1->next;  //we pointed to the next element. so even the next pointer overwriten, we still have value
    
            }
            else {
                result->next =l2;
                l2 = l2->next;
            } 
            result = result->next;
        }

        // once one of the listnode reached end.
        // we make sure the other node is fully read.
        // since it is a linked list, it already contains rest of the next value ordered
        if (l1!= nullptr) {
            result->next = l1;
        }
        else if (l2 != nullptr) {
            result->next = l2;
        }
        return head->next;
    }
};
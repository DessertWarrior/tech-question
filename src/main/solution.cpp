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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if (head == nullptr || head->next == nullptr)  return head;
        else if (k == 1) return head;

        //at least 2 nodes
        int i = 1;
        ListNode* current = head;
        ListNode* start = head;
        ListNode* end = nullptr;
        //head first

        for (int i = 0; i < k; i++) {
            //if head reached null before k elements
            if (current == nullptr) {
                return head;
            }
            end = current;
            current = current->next;
        }
        //reverse operation
        end->next = nullptr;

        ListNode* swap1 = start;
        ListNode* swap2 = start->next;
        ListNode* rNode =start->next;
        swap1->next = nullptr;      //remove next pointer
        // 1. get next value
        // 2. store it
        // 2. remove prev next pointer
        // 4. next value assign prev
        while (rNode != nullptr) {
            swap2 = rNode;
            rNode = rNode->next;
            swap2->next = swap1;
            
            swap1 = swap2;
        }
        
        //swap 2 contains the head element.
        head = swap2;

        // adding next reverse element to end 
        start->next = reverseKGroup(current,k);
        return head;
    }
};
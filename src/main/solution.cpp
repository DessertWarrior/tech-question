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
    ListNode* oddEvenList(ListNode* head) {
        if (head == nullptr)
            return head;
        
        int i = 1;
        ListNode* current = head;
        ListNode* prev =nullptr;
        queue<ListNode* > nodes;    //stores even nodes;

        while (current!=nullptr) {
            

            if (i % 2 == 0) //if its even
            {   
                nodes.push(current);
                prev->next = current->next; //connect prev with next
                current->next = nullptr;  //remove next pointer from current
                current = prev; // targets prev
                
            }
            i++;
            prev = current;
            current = current->next;
            
        }

        //once we got all the even indices into queue
        while (!nodes.empty()) {
            prev->next = nodes.front();
            prev = prev->next;
            nodes.pop();
        }

        return head;
    }
};
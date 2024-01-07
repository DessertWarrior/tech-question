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
class RecursiveSolution {
public:
    ListNode* reverseList(ListNode* head) {
        if (head == nullptr)
            return nullptr;
        // base condition: head == nullptr

        ListNode* next = head->next;
        
        head->next = nullptr;
        next = reverseList(next);// 2,3,4,5 3,4,5 4,5 5 nullptr
        
        ListNode* temp = next;  //used for returning the head

        if (next == nullptr)
            return head;
        else {
            while (next->next != nullptr) {
                next =next->next;
            }   
            next->next = head;
        }
        
        return temp;

    }
};

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (head == nullptr)
            return head;

        stack<ListNode*> nodes;
        //push all linkedlist in stack
        while (head != nullptr) {
            nodes.push(head);
            head = head->next;

            //removes next attribute 
            nodes.top()->next = nullptr;
        }

        // retreive it 
        head = nodes.top();
        nodes.pop();
        ListNode* current = head;

        while (!nodes.empty()) {
            current->next = nodes.top();
            current = current->next;

            nodes.pop();
        }

        return head;
    }
};
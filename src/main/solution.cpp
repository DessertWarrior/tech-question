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
    ListNode *reverseBetween(ListNode *head, int left, int right)
    {
        if (left == right)
            return head;
        stack<ListNode* > nodes;
        ListNode *current = head;
        ListNode *leftNode = nullptr;
        ListNode *rightNode = nullptr;
        ListNode *prevNode = nullptr;
        int i = 1;
        // if reverse item is the ead

        while (current != nullptr)
        {
            if (i >= left && i <= right) {
                // insert all index in range
                nodes.push(current);
            }

            if (i == left)
            {
                leftNode = prevNode;
            }
            // once it reached right, exit loop
            else if (i == right)
            {
                rightNode = current->next;
                break;
            }

            i++;
            prevNode = current;
            current = current->next;
        }
        if(leftNode == nullptr) {
            //remove next from the pointer
            nodes.top()->next = nullptr;
            head = nodes.top();
            leftNode = head;
            //remove node from stack
            nodes.pop();
            
        }
        while (!nodes.empty()) {
            current = nodes.top();
            //remove the next pointer
            current->next = nullptr;
            // store current node to the next of leftNode
            leftNode->next = current;
            leftNode = leftNode->next;
            //remove top of the stack
            nodes.pop();
        }

        //once we added all the nodes, append rightNode to the end of leftNode
        leftNode->next = rightNode;

        return head;
    }
};
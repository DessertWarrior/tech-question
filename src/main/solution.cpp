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

class LRUCache
{
private:
    struct DoublyNode
    {
        int value;
        int index;
        DoublyNode *prev;
        DoublyNode *next;
        DoublyNode() : value(0),index(0), prev(nullptr), next(nullptr) {}
        DoublyNode(int key,int value) : index(key),value(value), prev(nullptr), next(nullptr) {}
    };
    map<int, DoublyNode*> hashmap;
    DoublyNode *head;
    DoublyNode *tail;
    int size;
    int capacity;

public:
    LRUCache(int capacity)
    {
        this->capacity = capacity;
        size = 0;
        head = nullptr;
        tail = nullptr;
    }

    int get(int key)
    {
        if (hashmap[key] != NULL)
        {
            // get the current Node pos, remove the connection.
            updatePriority(hashmap[key]);
            return hashmap[key]->value;
        }
        return -1;
    }
    void updatePriority(DoublyNode *current)
    {
        if (head == current && tail == current)
            return;
        else if (current == tail)
        {
            //update tail
            tail = current->prev;
            tail->next = nullptr;

            //update head
            current->prev = nullptr;
            current->next = head;
            head->prev = current;
            head = current;
        }
        else if (current != head)
        {
            current->prev->next = current->next;
            current->next->prev = current->prev;

            current->prev = nullptr;
            current->next = head;
            head->prev =current;
            head = current;
        }
    }

    void put(int key, int value)
    {
        if (hashmap[key] != NULL)
        {
            hashmap[key]->value = value;

            updatePriority(hashmap[key]);
        }
        else if (size < capacity)
        {
            size++;
            DoublyNode *newNode = new DoublyNode(key,value);
            if (head == nullptr && tail == nullptr) {
                head = newNode;
                tail = newNode;
            }
            else {
                newNode->next = head;
                head->prev = newNode;
                head = newNode;
            }
            hashmap[key] = newNode;
        }
        else
        {
            //remove hashmap
            hashmap.erase(tail->index);

            //update tail;
            if (head == tail) {
                head = nullptr;
                tail = nullptr;
            }
            else {
                DoublyNode* temp = tail;
                tail = tail->prev;
                tail->next = nullptr;
                temp->prev = nullptr;
            }

            DoublyNode* node = new DoublyNode(key,value);

            if (head == nullptr && tail == nullptr) {
                tail = node;
                head = node;
            }
            else {
                node->next = head;
                head->prev = node;
                head = node;
            }
            
            //add hashmap
            hashmap[key] = node;

        }
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
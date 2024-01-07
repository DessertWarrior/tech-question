#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "../main/solution.cpp"
#include <cstdint>

TEST_CASE("Test case 1","[mergeKLists]") {
    vector<ListNode*> lists;
    {
        ListNode* head = new ListNode(1);
        ListNode* current = head;
        current->next= new ListNode(4);
        current = current->next;
        current->next = new ListNode(5);
        lists.push_back(head);
    }
    
    {
        ListNode* head = new ListNode(1);
        ListNode* current = head;
        current->next= new ListNode(3);
        current = current->next;
        current->next = new ListNode(4);
        lists.push_back(head);
    }

    {
        ListNode* head = new ListNode(2);
        head->next= new ListNode(6);
        lists.push_back(head);
    }

    Solution s;
    ListNode* sorted = s.mergeKLists(lists);
    REQUIRE( sorted->val == 1 );
    sorted = sorted->next;
    REQUIRE( sorted->val == 1 );
    sorted = sorted->next;
    REQUIRE( sorted->val == 2 );
    sorted = sorted->next;
    REQUIRE( sorted->val == 3 );
    sorted = sorted->next;
    REQUIRE( sorted->val == 4 );
    sorted = sorted->next;
    REQUIRE( sorted->val == 4 );
    sorted = sorted->next;
    REQUIRE( sorted->val == 5 );
    sorted = sorted->next;
    REQUIRE( sorted->val == 6 );
}
TEST_CASE("Test case 2","[sortList]") {
    vector<ListNode*> lists;

    Solution s;
    ListNode* sorted = s.mergeKLists(lists);
    REQUIRE( sorted == nullptr);
}
TEST_CASE("Test case 3","[sortList]") {

    vector<ListNode*> lists;
    {
        ListNode* head = new ListNode(-1); 
        lists.push_back(head);
    }
    {
        ListNode* head = new ListNode(-1); 
        lists.push_back(head);
    }
    {
        ListNode* head = new ListNode(-1); 
        lists.push_back(head);
    }
    {
        ListNode* head = new ListNode(-1); 
        lists.push_back(head);
    }
    {
        ListNode* head = new ListNode(-1); 
        lists.push_back(head);
    }  
    {
        ListNode* head = new ListNode(-1); 
        lists.push_back(head);
    }
    {
        ListNode* head = new ListNode(-1); 
        lists.push_back(head);
    }
    {
        ListNode* head = new ListNode(-1); 
        lists.push_back(head);
    }
    {
        ListNode* head = new ListNode(3); 
        lists.push_back(head);
    }
    {
        ListNode* head = new ListNode(-1); 
        lists.push_back(head);
    }
    {
        ListNode* head = new ListNode(-1); 
        lists.push_back(head);
    }
    {
        ListNode* head = new ListNode(2); 
        lists.push_back(head);
    }
    {
        ListNode* head = new ListNode(-1); 
        lists.push_back(head);
    }
    {
        ListNode* head = new ListNode(-1); 
        lists.push_back(head);
    }
    {
        ListNode* head = new ListNode(-1); 
        lists.push_back(head);
    }
    {
        ListNode* head = new ListNode(-1); 
        lists.push_back(head);
    }
    {
        ListNode* head = new ListNode(-1); 
        lists.push_back(head);
    }
    {
        ListNode* head = new ListNode(6); 
        lists.push_back(head);
    }
    {
        ListNode* head = new ListNode(4); 
        lists.push_back(head);
    }
    {
        ListNode* head = new ListNode(-1); 
        lists.push_back(head);
    }


    Solution s;
    ListNode* sorted = s.mergeKLists(lists);
    REQUIRE( sorted->val == -1 );
    sorted = sorted->next;
    REQUIRE( sorted->val == -1 );
    sorted = sorted->next;
    REQUIRE( sorted->val == -1 );
    sorted = sorted->next;
    REQUIRE( sorted->val == -1 );
    sorted = sorted->next;
    REQUIRE( sorted->val == -1 );
    sorted = sorted->next;
    REQUIRE( sorted->val == -1 );
    sorted = sorted->next;
    REQUIRE( sorted->val == -1 );
    sorted = sorted->next;
    REQUIRE( sorted->val == -1 );
    sorted = sorted->next;
    REQUIRE( sorted->val == -1 );
    sorted = sorted->next;
    REQUIRE( sorted->val == -1 );
    sorted = sorted->next;
    REQUIRE( sorted->val == -1 );
    sorted = sorted->next;
    REQUIRE( sorted->val == -1 );
    sorted = sorted->next;
    REQUIRE( sorted->val == -1 );
    sorted = sorted->next;
    REQUIRE( sorted->val == -1 );
    sorted = sorted->next;
    REQUIRE( sorted->val == -1 );
    sorted = sorted->next;
    REQUIRE( sorted->val == -1 );
    sorted = sorted->next;
    REQUIRE( sorted->val == 2 );
    sorted = sorted->next;
    REQUIRE( sorted->val == 3);
    sorted = sorted->next;
    REQUIRE( sorted->val == 4);
    sorted = sorted->next;
    REQUIRE( sorted->val == 6);

}
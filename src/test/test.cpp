#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "../main/solution.cpp"
#include <cstdint>

TEST_CASE("Test case 1","[sortList]") {
    ListNode* head = new ListNode(4);
    ListNode* current = head;
    ListNode* next = new ListNode(2);
    current->next= next;
    current = current->next;
    next = new ListNode(1);
    current->next= next;
    current = current->next;
    next = new ListNode(3);
    current->next= next;

    Solution s;
    ListNode* sorted = s.sortList(head);
    REQUIRE( sorted->val == 1 );
    sorted = sorted->next;
    REQUIRE( sorted->val == 2 );
    sorted = sorted->next;
    REQUIRE( sorted->val == 3 );
    sorted = sorted->next;
    REQUIRE( sorted->val == 4 );
}
TEST_CASE("Test case 2","[sortList]") {
    ListNode* head = new ListNode(-1);
    ListNode* current = head;
    ListNode* next = new ListNode(5);
    current->next= next;
    current = current->next;
    next = new ListNode(3);
    current->next= next;
    current = current->next;
    next = new ListNode(4);
    current->next= next;
    current = current->next;
    next = new ListNode(0);
    current->next= next;


    Solution s;
    ListNode* sorted = s.sortList(head);
    REQUIRE( sorted->val == -1 );
    sorted = sorted->next;
    REQUIRE( sorted->val == 0 );
    sorted = sorted->next;
    REQUIRE( sorted->val == 3 );
    sorted = sorted->next;
    REQUIRE( sorted->val == 4 );
    sorted = sorted->next;
    REQUIRE( sorted->val == 5 );
}
TEST_CASE("Test case 3","[sortList]") {
    ListNode* head = new ListNode(-1);    
    ListNode* current = head;
    ListNode* next = new ListNode(-1);
    current->next= next;
    current = current->next;
    next = new ListNode(5);
    current->next= next;
    current = current->next;
    next = new ListNode(-5);
    current->next= next;



    Solution s;
    ListNode* sorted = s.sortList(head);
    REQUIRE( sorted->val == -5 );
    sorted = sorted->next;
    REQUIRE( sorted->val == -1 );
    sorted = sorted->next;
    REQUIRE( sorted->val == -1 );
    sorted = sorted->next;
    REQUIRE( sorted->val == 5 );
}
#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "../main/solution.cpp"
#include <cstdint>

TEST_CASE("Test case 1", "[reverseKGroup]")
{
    ListNode* head = new ListNode(1);
    ListNode* node = new ListNode(2);
    ListNode* node2 = new ListNode(3);
    ListNode* node3 = new ListNode(4);
    ListNode* node4 = new ListNode(5);

    head->next = node;
    node->next = node2;
    node2->next = node3;
    node3->next = node4;
    
    Solution s;
    ListNode* result = s.reverseKGroup(head,2);
    REQUIRE(result->val == 2 );
    REQUIRE(result->next->val == 1);
    REQUIRE(result->next->next->val == 4);
    REQUIRE(result->next->next->next->val == 3);
    REQUIRE(result->next->next->next->next->val == 5);
    REQUIRE(result->next->next->next->next->next == nullptr);

    REQUIRE(result == node);
    REQUIRE(result->next == head);
    REQUIRE(result->next->next == node3);
    REQUIRE(result->next->next->next == node2);
    REQUIRE(result->next->next->next->next == node4);

}
TEST_CASE("Test case 2", "[reverseKGroup]")
{
    ListNode* head = new ListNode(1);
    ListNode* node = new ListNode(2);
    ListNode* node2 = new ListNode(3);
    ListNode* node3 = new ListNode(4);
    ListNode* node4 = new ListNode(5);

    head->next = node;
    node->next = node2;
    node2->next = node3;
    node3->next = node4;
    
    Solution s;
    ListNode* result = s.reverseKGroup(head,3);
    REQUIRE(result->val == 3 );
    REQUIRE(result->next->val == 2);
    REQUIRE(result->next->next->val == 1);
    REQUIRE(result->next->next->next->val == 4);
    REQUIRE(result->next->next->next->next->val == 5);
    REQUIRE(result->next->next->next->next->next == nullptr);

    REQUIRE(result == node2);
    REQUIRE(result->next == node);
    REQUIRE(result->next->next == head);
    REQUIRE(result->next->next->next == node3);
    REQUIRE(result->next->next->next->next == node4);

}
TEST_CASE("Test case 3", "[reverseKGroup]")
{
    ListNode* head = new ListNode(1);
    
    Solution s;
    ListNode* result = s.reverseKGroup(head,1);
    REQUIRE(result->val == 1 );
    REQUIRE(result->next == nullptr);

    REQUIRE(result == head);

}
TEST_CASE("Test case 4", "[reverseKGroup]")
{
    ListNode* head = new ListNode(1);
    ListNode* node = new ListNode(2);
    ListNode* node2 = new ListNode(3);
    ListNode* node3 = new ListNode(4);
    ListNode* node4 = new ListNode(5);
    ListNode* node5 = new ListNode(6);
    ListNode* node6 = new ListNode(7);


    head->next = node;
    node->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    node5->next = node6;
    
    Solution s;
    ListNode* result = s.reverseKGroup(head,3);
    REQUIRE(result->val == 3 );
    REQUIRE(result->next->val == 2);
    REQUIRE(result->next->next->val == 1);
    REQUIRE(result->next->next->next->val == 6);
    REQUIRE(result->next->next->next->next->val == 5);
    REQUIRE(result->next->next->next->next->next->val == 4);
    REQUIRE(result->next->next->next->next->next->next->val == 7);
    REQUIRE(result->next->next->next->next->next->next->next == nullptr);

    REQUIRE(result == node2);
    REQUIRE(result->next == node);
    REQUIRE(result->next->next == head);
    REQUIRE(result->next->next->next == node5);
    REQUIRE(result->next->next->next->next == node4);
    REQUIRE(result->next->next->next->next->next == node3);
    REQUIRE(result->next->next->next->next->next->next == node6);

}
TEST_CASE("Test case 5", "[reverseKGroup]")
{
    ListNode* head = new ListNode(1);
    ListNode* node = new ListNode(2);
    ListNode* node2 = new ListNode(3);
    ListNode* node3 = new ListNode(4);
    ListNode* node4 = new ListNode(5);
    head->next = node;
    node->next = node2;
    node2->next = node3;
    node3->next = node4;

    Solution s;
    ListNode* result = s.reverseKGroup(head,1);
    REQUIRE(result->val == 1 );
    REQUIRE(result->next->val == 2);
    REQUIRE(result->next->next->val == 3);
    REQUIRE(result->next->next->next->val == 4);
    REQUIRE(result->next->next->next->next->val == 5);
    REQUIRE(result->next->next->next->next->next == nullptr);

    REQUIRE(result == head);
    REQUIRE(result->next == node);
    REQUIRE(result->next->next == node2);
    REQUIRE(result->next->next->next == node3);
    REQUIRE(result->next->next->next->next == node4);

}   
TEST_CASE("Test case 6", "[reverseKGroup]")
{
    ListNode* head = new ListNode(1);
    ListNode* node = new ListNode(2);
    head->next = node;

    Solution s;
    ListNode* result = s.reverseKGroup(head,2);
    REQUIRE(result->val == 2 );
    REQUIRE(result->next->val == 1);
    REQUIRE(result->next->next == nullptr);

    REQUIRE(result == node);
    REQUIRE(result->next == head);

}
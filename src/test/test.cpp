#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "../main/solution.cpp"
#include <cstdint>

TEST_CASE("Test case 1", "[nextGreaterElement]")
{
    Solution s;
    
    ListNode* l1 = new ListNode(2);
    l1->next = new ListNode(4);
    l1->next->next = new ListNode(3);

    ListNode* l2 = new ListNode(5);
    l2->next = new ListNode(6);
    l2->next->next = new ListNode(4);

    ListNode* ans = s.addTwoNumbers(l1,l2);
    REQUIRE(ans->val == 7);
    REQUIRE(ans->next->val == 0);
    REQUIRE(ans->next->next->val == 8);
}
TEST_CASE("Test case 2", "[nextGreaterElement]")
{
    Solution s;
    
    ListNode* l1 = new ListNode(0);

    ListNode* l2 = new ListNode(0);

    ListNode* ans = s.addTwoNumbers(l1,l2);
    REQUIRE(ans->val == 0);
}
TEST_CASE("Test case 3", "[nextGreaterElement]")
{
    Solution s;
    
    ListNode* l1 = new ListNode(9);
    l1->next = new ListNode(9);
    l1->next->next = new ListNode(9);
    l1->next->next->next = new ListNode(9);
    l1->next->next->next->next = new ListNode(9);
    l1->next->next->next->next->next = new ListNode(9);
    l1->next->next->next->next->next->next = new ListNode(9);

    ListNode* l2 = new ListNode(9);
    l2->next = new ListNode(9);
    l2->next->next = new ListNode(9);
    l2->next->next->next = new ListNode(9);

    ListNode* ans = s.addTwoNumbers(l1,l2);
    REQUIRE(ans->val == 8);
    REQUIRE(ans->next->val == 9);
    REQUIRE(ans->next->next->val == 9);
    REQUIRE(ans->next->next->next->val == 9);
    REQUIRE(ans->next->next->next->next->val == 0);
    REQUIRE(ans->next->next->next->next->next->val == 0);
    REQUIRE(ans->next->next->next->next->next->next->val == 0);
    REQUIRE(ans->next->next->next->next->next->next->next->val == 1);
}

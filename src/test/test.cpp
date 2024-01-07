#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "../main/solution.cpp"
#include <cstdint>

TEST_CASE("Test case 1", "[reverseBetween]")
{
    Solution s;
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next= new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    ListNode* result = s.reverseBetween(head, 2, 4);
    REQUIRE(result->val == 1);
    REQUIRE(result->next->val == 4);
    REQUIRE(result->next->next->val == 3);
    REQUIRE(result->next->next->next->val == 2);
    REQUIRE(result->next->next->next->next->val == 5);
}
TEST_CASE("Test case 2", "[reverseBetween]")
{
    Solution s;
    ListNode* head = new ListNode(5);
    ListNode* result = s.reverseBetween(head, 1, 1);
    REQUIRE(result->val == 5);
}
TEST_CASE("Test case 3", "[reverseBetween]")
{
    Solution s;
    ListNode* head = new ListNode(3);
    head->next = new ListNode(5);
    ListNode* result = s.reverseBetween(head, 1, 2);
    REQUIRE(result->val == 5);
    REQUIRE(result->next->val == 3);
}
TEST_CASE("Test case 4", "[reverseBetween]")
{
    Solution s;
    ListNode* head = new ListNode(3);
    head->next = new ListNode(5);
    head->next->next = new ListNode(7);
    head->next->next->next = new ListNode(9);
    head->next->next->next->next = new ListNode(11);
    head->next->next->next->next->next = new ListNode(13);
    ListNode* result = s.reverseBetween(head, 3,4);
    REQUIRE(result->val == 3);
    REQUIRE(result->next->val == 5);
    REQUIRE(result->next->next->val == 9);
    REQUIRE(result->next->next->next->val == 7);
    REQUIRE(result->next->next->next->next->val == 11);
    REQUIRE(result->next->next->next->next->next->val == 13);
}
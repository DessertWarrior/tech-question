#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "../main/solution.cpp"
#include <cstdint>

TEST_CASE("Test case 1", "[oddEvenList]")
{
    Solution s;
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next= new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    ListNode* result = s.oddEvenList(head);
    REQUIRE(result->val == 1);
    REQUIRE(result->next->val == 3);
    REQUIRE(result->next->next->val == 5);
    REQUIRE(result->next->next->next->val == 2);
    REQUIRE(result->next->next->next->next->val == 4);
    REQUIRE(result->next->next->next->next->next == nullptr);
}
TEST_CASE("Test case 2", "[oddEvenList]")
{
    Solution s;
    ListNode* head = new ListNode(2);
    head->next = new ListNode(1);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(5);
    head->next->next->next->next = new ListNode(6);
    head->next->next->next->next->next = new ListNode(4);
    head->next->next->next->next->next->next = new ListNode(7);

    ListNode* result = s.oddEvenList(head);
    REQUIRE(result->val == 2);
    REQUIRE(result->next->val == 3);
    REQUIRE(result->next->next->val == 6);
    REQUIRE(result->next->next->next->val == 7);
    REQUIRE(result->next->next->next->next->val == 1);
    REQUIRE(result->next->next->next->next->next->val == 5);
    REQUIRE(result->next->next->next->next->next->next->val == 4);
    REQUIRE(result->next->next->next->next->next->next->next == nullptr);
}
TEST_CASE("Test case 3", "[oddEvenList]")
{
    Solution s;
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);

    ListNode* result = s.oddEvenList(head);
    REQUIRE(result->val == 1);
    REQUIRE(result->next->val == 3);
    REQUIRE(result->next->next->val == 2);
    REQUIRE(result->next->next->next->val == 4);
}
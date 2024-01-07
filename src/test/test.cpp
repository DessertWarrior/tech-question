#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "../main/solution.cpp"
#include <cstdint>

TEST_CASE("Test case 1", "[reverseList]")
{
    Solution s;
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next= new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    ListNode* result = s.reverseList(head);
    REQUIRE(result->val == 5);
    REQUIRE(result->next->val == 4);
    REQUIRE(result->next->next->val == 3);
    REQUIRE(result->next->next->next->val == 2);
    REQUIRE(result->next->next->next->next->val == 1);
    REQUIRE(result->next->next->next->next->next == nullptr);
}
TEST_CASE("Test case 2", "[reverseList]")
{
    Solution s;
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);

    ListNode* result = s.reverseList(head);
    REQUIRE(result->val == 3);
    REQUIRE(result->next->val == 2);
    REQUIRE(result->next->next->val == 1);
    REQUIRE(result->next->next->next == nullptr);
}
TEST_CASE("Test case 3", "[reverseList]")
{
    Solution s;
    ListNode* head = new ListNode(1);

    ListNode* result = s.reverseList(head);
    REQUIRE(result->val == 1);
    REQUIRE(result->next == nullptr);
}
TEST_CASE("Test case 4", "[reverseList]")
{
    Solution s;
    ListNode* head = nullptr;

    ListNode* result = s.reverseList(head);
    REQUIRE(result == nullptr);
}
TEST_CASE("Test case 5", "[reverseList]")
{
    Solution s;
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);

    ListNode* result = s.reverseList(head);
    REQUIRE(result->val == 2);
    REQUIRE(result->next->val == 1);
    REQUIRE(result->next->next == nullptr);
}
TEST_CASE("Test case 6", "[reverseList]")
{
    RecursiveSolution s;
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);

    ListNode* result = s.reverseList(head);
    REQUIRE(result->val == 3);
    REQUIRE(result->next->val == 2);
    REQUIRE(result->next->next->val == 1);
    REQUIRE(result->next->next->next == nullptr);
}
TEST_CASE("Test case 7", "[reverseList]")
{
    RecursiveSolution s;
    ListNode* head = new ListNode(1);

    ListNode* result = s.reverseList(head);
    REQUIRE(result->val == 1);
    REQUIRE(result->next == nullptr);
}
TEST_CASE("Test case 8", "[reverseList]")
{
    RecursiveSolution s;
    ListNode* head = nullptr;

    ListNode* result = s.reverseList(head);
    REQUIRE(result == nullptr);
}
TEST_CASE("Test case 9", "[reverseList]")
{
    RecursiveSolution s;
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);

    ListNode* result = s.reverseList(head);
    REQUIRE(result->val == 2);
    REQUIRE(result->next->val == 1);
    REQUIRE(result->next->next == nullptr);
}
TEST_CASE("Test case 10", "[reverseList]")
{
    RecursiveSolution s;
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    ListNode* result = s.reverseList(head);
    REQUIRE(result->val == 5);
    REQUIRE(result->next->val == 4);
    REQUIRE(result->next->next->val == 3);
    REQUIRE(result->next->next->next->val == 2);
    REQUIRE(result->next->next->next->next->val == 1);
    REQUIRE(result->next->next->next->next->next == nullptr);
}
TEST_CASE("Test case 11", "[reverseList]")
{
    RecursiveSolution s;
    ListNode* head = nullptr;

    ListNode* result = s.reverseList(head);
    REQUIRE(result == nullptr);
}
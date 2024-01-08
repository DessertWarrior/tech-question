#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "../main/solution.cpp"
#include <cstdint>

TEST_CASE("Test case 1", "[getIntersectionNode]")
{
    Solution s;
    ListNode* head = new ListNode(1);
    ListNode* head2 = new ListNode(1);

    head->next = new ListNode(2);
    head2->next = new ListNode(2);

    ListNode* s1 = new ListNode(3);
    ListNode* s2= new ListNode(4);
    ListNode* s3 = new ListNode(5);
    head->next->next = s1;
    head->next->next->next = s2;
    head->next->next->next->next = s3;

    head2->next->next = s1;

    ListNode* result = s.getIntersectionNode(head,head2);
    REQUIRE(result->val == 3);
    REQUIRE(result->next->val == 4);
    REQUIRE(result->next->next->val == 5);
    REQUIRE(result->next->next->next == nullptr);
}
TEST_CASE("Test case 2", "[getIntersectionNode]")
{
    Solution s;
    ListNode* head = new ListNode(1);
    ListNode* head2 = new ListNode(1);

    head->next = new ListNode(2);
    head2->next = new ListNode(2);

    ListNode* s1 = new ListNode(6);
    ListNode* s2= new ListNode(4);
    head->next->next = s1;
    head->next->next->next = s2;

    head2->next->next = s1;

    ListNode* result = s.getIntersectionNode(head,head2);
    REQUIRE(result->val == 6);
    REQUIRE(result->next->val == 4);
    REQUIRE(result->next->next == nullptr);
}
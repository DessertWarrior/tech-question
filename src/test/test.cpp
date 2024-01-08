#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "../main/solution.cpp"
#include <cstdint>

TEST_CASE("Test case 1", "[getIntersectionNode]")
{
    Solution s;
    ListNode* head = new ListNode(1);
    ListNode* head2 = new ListNode(1);

    ListNode* shared_ptr = new ListNode(3);
    ListNode* shared_ptr2 = new ListNode(4);
    ListNode* shared_ptr3 = new ListNode(5);

    head->next = new ListNode(2);
    head2->next = new ListNode(2);

    head->next->next = shared_ptr;
    head->next->next->next= shared_ptr2;
    head->next->next->next->next = shared_ptr3;

    head2->next->next = shared_ptr;



    ListNode* result = s.getIntersectionNode(head,head2);
    REQUIRE(result->val==3);
    REQUIRE(result->next->val == 4);
    REQUIRE(result->next->next->val == 5);
    REQUIRE(result->next->next->next == nullptr);
}
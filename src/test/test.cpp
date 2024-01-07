#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "../main/solution.cpp"
#include <cstdint>

TEST_CASE("Test case 1", "[nextGreaterElement]")
{
    Solution s;
    vector<int>nums1 = {4,1,2};
    vector<int>nums2 = {1,3,4,2};
    vector<int>result = s.nextGreaterElement(nums1,nums2);
    
    REQUIRE( result[0] == -1 );
    REQUIRE( result[1] == 3 );
    REQUIRE( result[2] == -1 );

}
TEST_CASE("Test case 2", "[nextGreaterElement]")
{
    Solution s;
    vector<int>nums1 = {2,4};
    vector<int>nums2 = {1,2,3,4};
    vector<int>result = s.nextGreaterElement(nums1,nums2);
    
    REQUIRE( result[0] == 3 );
    REQUIRE( result[1] == -1 );

}
TEST_CASE("Test case 3", "[nextGreaterElement]")
{
    Solution s;
    vector<int>nums1 = {1,3,5,2,4};
    vector<int>nums2 = {6,5,4,3,2,1,7};
    vector<int>result = s.nextGreaterElement(nums1,nums2);
    
    REQUIRE( result[0] == 7 );
    REQUIRE( result[1] == 7 );
    REQUIRE( result[2] == 7 );
    REQUIRE( result[3] == 7 );
    REQUIRE( result[4] == 7 );

}
TEST_CASE("Test case 4", "[nextGreaterElement]")
{
    Solution s;
    vector<int>nums1 = {1,3,5,2,4};
    vector<int>nums2 = {1,7,2,5,4,8,3,6};
    vector<int>result = s.nextGreaterElement(nums1,nums2);

    REQUIRE( result[0] == 7 );
    REQUIRE( result[1] == 6 );
    REQUIRE( result[2] == 8 );
    REQUIRE( result[3] == 5 );
    REQUIRE( result[4] == 8 );
}
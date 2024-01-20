#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "../main/solution.cpp"
#include <cstdint>

TEST_CASE("Test case 1", "[candy]")
{
    Solution s;
    vector<int>v = {1,2,3,4,5,5,4,3,2,1};
    REQUIRE(s.candy(v) == 30);
}
TEST_CASE("Test case 2", "[candy]")
{
    Solution s;
    vector<int>v = {1,6,10,8,7,5,8,3,2,1};
    REQUIRE(s.candy(v) == 23);
}
TEST_CASE("Test case 3", "[candy]")
{
    Solution s;
    vector<int>v = {1,6,10,8,6,10,8,10,10,1};
    REQUIRE(s.candy(v) == 17);
}
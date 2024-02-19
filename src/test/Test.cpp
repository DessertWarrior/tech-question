#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "../main/Solution.cpp"
#include <cstdint>

TEST_CASE("Test case 1", "[Trap]")
{
    // smaller trap within trap
    Solution s;
    vector<int> v{4,2,0,3,2,5};
    REQUIRE(s.Trap(v) == 9);
}
TEST_CASE("Test case 2", "[Trap]")
{
    // 3 small traps
    Solution s;
    vector<int> v{0,1,0,5,4,3,2,5,6,1,0,1};
    REQUIRE(s.Trap(v) == 8);
}
TEST_CASE("Test case 3", "[Trap]")
{
    // 3 small traps
    Solution s;
    vector<int> v{0,1,0,2,1,0,1,3,2,1,2,1};
    REQUIRE(s.Trap(v) == 6);
}
TEST_CASE("Test case 4", "[Trap]")
{
    // traps from high to low
    Solution s;
    vector<int> v{9,6,8,4,6,2,0,1};
    REQUIRE(s.Trap(v) == 5);
}
TEST_CASE("Test case 5", "[reverseWords]")
{
    //combination
    Solution s;
    vector<int> v{10000, 1,0,1,4,8,4,9,6,8,4,6,2,0,1,8888};
    REQUIRE(s.Trap(v) == 124378);
}
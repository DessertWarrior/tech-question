#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "../main/solution.cpp"
#include <cstdint>

TEST_CASE("Test case 1", "[calPoints]")
{
    Solution s;
    vector<string> ops = {"5", "2", "C", "D", "+"};
    REQUIRE(s.calPoints(ops) == 30);
}
TEST_CASE("Test case 2", "[calPoints]")
{
    Solution s;
    vector<string> ops = {"5", "-2", "4", "C", "D", "9", "+", "+"};
    REQUIRE(s.calPoints(ops) == 27);
}
TEST_CASE("Test case 3", "[calPoints]")
{
    Solution s;
    vector<string> ops = {"1", "C"};
    REQUIRE(s.calPoints(ops) == 0);
}
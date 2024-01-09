#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "../main/solution.cpp"
#include <cstdint>

TEST_CASE("Test case 1", "[canFinish]")
{
    Solution s;
    vector<vector<int>> ps;
    ps.push_back({1,0});

    REQUIRE(s.canFinish(2,ps) == true);
}
TEST_CASE("Test case 2", "[canFinish]")
{
    Solution s;
    vector<vector<int>> ps;
    ps.push_back({1,0});
    ps.push_back({0,1});

    REQUIRE(s.canFinish(2,ps) == false);
}
TEST_CASE("Test case 3", "[canFinish]")
{
    Solution s;
    vector<vector<int>> ps;
    ps.push_back({1,0});
    ps.push_back({2,0});
    ps.push_back({3,1});
    ps.push_back({3,2});

    REQUIRE(s.canFinish(4,ps) == true);
}

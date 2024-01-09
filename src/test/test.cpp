#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "../main/solution.cpp"
#include <cstdint>

TEST_CASE("Test case 1", "[coinChange]")
{
    Solution s;
    vector<int> coins;
    coins.push_back(1);
    coins.push_back(2);
    coins.push_back(5);

    REQUIRE(s.coinChange(coins, 11) == 3);
}
TEST_CASE("Test case 2", "[coinChange]")
{
    Solution s;
    vector<int> coins;
    coins.push_back(2);

    REQUIRE(s.coinChange(coins, 3) == -1);
}
TEST_CASE("Test case 3", "[coinChange]")
{
    Solution s;
    vector<int> coins;
    coins.push_back(1);

    REQUIRE(s.coinChange(coins, 0) == 0);
}
TEST_CASE("Test case 4", "[coinChange]")
{
    Solution s;
    vector<int> coins;
    coins.push_back(1);
    coins.push_back(2);
    coins.push_back(5);
    coins.push_back(7);
    coins.push_back(9);
    coins.push_back(51);
    coins.push_back(230);


    REQUIRE(s.coinChange(coins, 104) == 3);
}
TEST_CASE("Test case 5", "[coinChange]")
{
    Solution s;
    vector<int> coins;
    coins.push_back(2);
    coins.push_back(5);
    coins.push_back(10);
    coins.push_back(1);

    REQUIRE(s.coinChange(coins, 12) == 2);

}
TEST_CASE("Test case 6", "[coinChange]")
{
    Solution s;
    vector<int> coins;
    coins.push_back(186);
    coins.push_back(419);
    coins.push_back(83);
    coins.push_back(408);

    REQUIRE(s.coinChange(coins, 6249) == 20);

}

#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "../main/Solution.cpp"
#include <cstdint>

TEST_CASE("Test case 1", "[convert]")
{
    Solution s;
    string str = "PAYPALISHIRING";
    REQUIRE(s.convert(str,3) == "PAHNAPLSIIGYIR");
}
TEST_CASE("Test case 2", "[convert]")
{
    Solution s;
    string str = "A";
    REQUIRE(s.convert(str,1) == "A");
}
TEST_CASE("Test case 3", "[convert]")
{
    Solution s;
    string str = "PAYPALISHIRING";
    REQUIRE(s.convert(str,4) == "PINALSIGYAHRPI");
}
TEST_CASE("Test case 4","[convert]")
{
    Solution s;
    string str = "STNMODERNATION";
    REQUIRE(s.convert(str,14) == "STNMODERNATION");
}
TEST_CASE("Test case 5","[convert]")
{
    Solution s;
    string str = "STNMODERNATION";
    REQUIRE(s.convert(str,2) == "SNOENTOTMDRAIN");
}
TEST_CASE("Test case 6","[convert]")
{
    Solution s;
    string str = "STNMODERNATION";
    REQUIRE(s.convert(str,1) == "STNMODERNATION");
}
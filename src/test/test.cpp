#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "../main/solution.cpp"
#include <cstdint>

TEST_CASE("Test case 1", "[reverseWords]")
{
    Solution s;
    string str = "the sky is blue";
    REQUIRE(s.reverseWords(str) == "blue is sky the");
}
TEST_CASE("Test case 2", "[reverseWords]")
{
    Solution s;
    string str = "  hello world!  ";
    REQUIRE(s.reverseWords(str) == "world! hello");
}
TEST_CASE("Test case 3", "[reverseWords]")
{
    Solution s;
    string str = "a good   example";
    REQUIRE(s.reverseWords(str) == "example good a");
}
TEST_CASE("Test case 4", "[reverseWords]")
{
    Solution s;
    string str = "  Bob    Loves  Alice   ";
    REQUIRE(s.reverseWords(str) == "Alice Loves Bob");
}
TEST_CASE("Test case 5", "[reverseWords]")
{
    Solution s;
    string str = "EPY2giL";
    REQUIRE(s.reverseWords(str) == "EPY2giL");
}
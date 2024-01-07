#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "../main/solution.cpp"
#include <cstdint>

TEST_CASE("Test case 1", "[nextGreaterElement]")
{
    Solution s;
    string str = "()";
    
    REQUIRE( s.isValid(str) );
}
TEST_CASE("Test case 2", "[nextGreaterElement]")
{
    Solution s;
    string str = "()[]{}";
    
    REQUIRE( s.isValid(str) );
}
TEST_CASE("Test case 3", "[nextGreaterElement]")
{
    Solution s;
    string str = "(]";
    
    REQUIRE( !s.isValid(str) );
}
TEST_CASE("Test case 4", "[nextGreaterElement]")
{
    Solution s;
    string str = "([)]";
    
    REQUIRE( !s.isValid(str) );
}
TEST_CASE("Test case 5", "[nextGreaterElement]")
{
    Solution s;
    string str = "{[]}";
    
    REQUIRE( s.isValid(str) );
}
TEST_CASE("Test case 6", "[nextGreaterElement]")
{
    Solution s;
    string str = "([}}])";
    
    REQUIRE( !s.isValid(str) );
}

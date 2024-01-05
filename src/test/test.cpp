#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "../main/solution.cpp"
#include <cstdint>

TEST_CASE("All numbers are converted to roman numerals","[Solution]") {
    Solution s;

    // REQUIRE( s.intToRoman(1) == "I" );
    REQUIRE( s.scoreOfParentheses("((()())())") == 10 );
    REQUIRE( s.scoreOfParentheses("(((((())))))") == 32 );
    REQUIRE( s.scoreOfParentheses("(((()())()(())))")== 28 );
    REQUIRE( s.scoreOfParentheses("()()") == 2 );
    REQUIRE( s.scoreOfParentheses("()") == 1 );
    REQUIRE( s.scoreOfParentheses("(())") == 2 );
    REQUIRE( s.scoreOfParentheses("()()()") == 3 );
    REQUIRE( s.scoreOfParentheses("(()(()))") == 6 );
    REQUIRE( s.scoreOfParentheses("(()())") == 4 );
    REQUIRE( s.scoreOfParentheses("()()()()") == 4 );
    REQUIRE( s.scoreOfParentheses("()()()()()") == 5 );
    REQUIRE( s.scoreOfParentheses("()()()()()()") == 6 );
    REQUIRE( s.scoreOfParentheses("()()()()()()()") == 7 );
    REQUIRE( s.scoreOfParentheses("()()()()()()()()") == 8 );
    

    
}
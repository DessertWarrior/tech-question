#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "../main/solution.cpp"
#include <cstdint>

TEST_CASE("All numbers are converted to roman numerals","[Solution]") {
    Solution s;

    // REQUIRE( s.intToRoman(1) == "I" );
    REQUIRE( s.backspaceCompare("ab#c","ad#c") == true );
    REQUIRE( s.backspaceCompare("ab##","c#d#") == true );
    REQUIRE( s.backspaceCompare("a##c","#a#c") == true );
    REQUIRE( s.backspaceCompare("a#c","b") == false );
    REQUIRE( s.backspaceCompare("y#fo##f","y#f#o##f") == true );
    

    
}
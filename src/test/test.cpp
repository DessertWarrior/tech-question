#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "../main/solution.cpp"
#include <cstdint>

TEST_CASE("All numbers are converted to roman numerals","[Solution]") {
    Solution s;

    REQUIRE( s.intToRoman(1) == "I" );
    REQUIRE( s.intToRoman(2) == "II" );
    REQUIRE( s.intToRoman(3) == "III" );
    REQUIRE( s.intToRoman(4) == "IV" );
    REQUIRE( s.intToRoman(5) == "V" );
    REQUIRE( s.intToRoman(6) == "VI" );
    REQUIRE( s.intToRoman(9) == "IX" );
    REQUIRE( s.intToRoman(10) == "X" );
    REQUIRE( s.intToRoman(11) == "XI" );
    REQUIRE( s.intToRoman(15) == "XV" );
    REQUIRE( s.intToRoman(16) == "XVI" );
    REQUIRE( s.intToRoman(19) == "XIX" );
    REQUIRE( s.intToRoman(20) == "XX" );
    REQUIRE( s.intToRoman(21) == "XXI" );
    REQUIRE( s.intToRoman(25) == "XXV" );
    REQUIRE( s.intToRoman(26) == "XXVI" );
    REQUIRE( s.intToRoman(29) == "XXIX" );
    REQUIRE( s.intToRoman(30) == "XXX" );
    REQUIRE( s.intToRoman(40) == "XL" );
    REQUIRE( s.intToRoman(45) == "XLV" );
    REQUIRE( s.intToRoman(50) == "L" );
    REQUIRE( s.intToRoman(60) == "LX" );
    REQUIRE( s.intToRoman(70) == "LXX" );
    REQUIRE( s.intToRoman(80) == "LXXX" );
    REQUIRE( s.intToRoman(90) == "XC" );
    REQUIRE( s.intToRoman(99) == "XCIX" );
    REQUIRE( s.intToRoman(100) == "C" );
    REQUIRE( s.intToRoman(200) == "CC" );
    REQUIRE( s.intToRoman(300) == "CCC" );
    REQUIRE( s.intToRoman(400) == "CD" );
    REQUIRE( s.intToRoman(500) == "D" );
    REQUIRE( s.intToRoman(600) == "DC" );
    REQUIRE( s.intToRoman(700) == "DCC" );
    REQUIRE( s.intToRoman(800) == "DCCC" );
    REQUIRE( s.intToRoman(900) == "CM" );
    REQUIRE( s.intToRoman(1000) == "M" );
    REQUIRE( s.intToRoman(1499) == "MCDXCIX" );
    REQUIRE( s.intToRoman(1500) == "MD" );
    REQUIRE( s.intToRoman(1800) == "MDCCC" );
    REQUIRE( s.intToRoman(2000) == "MM" );
    REQUIRE( s.intToRoman(3000) == "MMM" );
    REQUIRE( s.intToRoman(3999) == "MMMCMXCIX" );

    
}
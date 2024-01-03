#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "../main/solution.cpp"
#include <cstdint>

TEST_CASE("All roman numerals are converted to Numbers","[Solution]") {
    Solution s;

    REQUIRE( s.romanToInt("I") == 1 );
    REQUIRE( s.romanToInt("II") == 2 );
    REQUIRE( s.romanToInt("III") == 3 );
    REQUIRE( s.romanToInt("IV") == 4 );
    REQUIRE( s.romanToInt("V") == 5 );
    REQUIRE( s.romanToInt("VI") == 6 );
    REQUIRE( s.romanToInt("IX") == 9 );
    REQUIRE( s.romanToInt("X") == 10 );
    REQUIRE( s.romanToInt("XI") == 11 );
    REQUIRE( s.romanToInt("XV") == 15 );
    REQUIRE( s.romanToInt("XVI") == 16 );
    REQUIRE( s.romanToInt("XIX") == 19 );
    REQUIRE( s.romanToInt("XX") == 20 );
    REQUIRE( s.romanToInt("XXI") == 21 );
    REQUIRE( s.romanToInt("XXV") == 25 );
    REQUIRE( s.romanToInt("XXVI") == 26 );
    REQUIRE( s.romanToInt("XXIX") == 29 );
    REQUIRE( s.romanToInt("XXX") == 30 );
    REQUIRE( s.romanToInt("XL") == 40 );
    REQUIRE( s.romanToInt("XLV") == 45 );
    REQUIRE( s.romanToInt("L") == 50 );
    REQUIRE( s.romanToInt("LX") == 60 );
    REQUIRE( s.romanToInt("LXX") == 70 );
    REQUIRE( s.romanToInt("LXXX") == 80 );
    REQUIRE( s.romanToInt("XC") == 90 );
    REQUIRE( s.romanToInt("XCIX") == 99 );
    REQUIRE( s.romanToInt("C") == 100 );
    REQUIRE( s.romanToInt("CC") == 200 );
    REQUIRE( s.romanToInt("CCC") == 300 );
    REQUIRE( s.romanToInt("CD") == 400 );
    REQUIRE( s.romanToInt("D") == 500 );
    REQUIRE( s.romanToInt("DC") == 600 );
    REQUIRE( s.romanToInt("DCC") == 700 );
    REQUIRE( s.romanToInt("DCCC") == 800 );
    REQUIRE( s.romanToInt("CM") == 900 );
    REQUIRE( s.romanToInt("M") == 1000 );
    REQUIRE( s.romanToInt("MCDXCIX") == 1499 );
    REQUIRE( s.romanToInt("MD") == 1500 );
    REQUIRE( s.romanToInt("MDCCC") == 1800 );
    REQUIRE( s.romanToInt("MM") == 2000 );
    REQUIRE( s.romanToInt("MMM") == 3000 );
    REQUIRE( s.romanToInt("MMMCMXCIX") == 3999 );

    
}
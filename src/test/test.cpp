#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "../main/translation.cpp"
#include <cstdint>

TEST_CASE("All numbers are translated to French","[translation]") {
    REQUIRE( toFrench(1) == "un " );
    REQUIRE( toFrench(2) == "deux " );
    REQUIRE( toFrench(3) == "trois " );
    REQUIRE( toFrench(4) == "quatre " );
    REQUIRE( toFrench(5) == "cinq " );
    REQUIRE( toFrench(6) == "six " );
    REQUIRE( toFrench(7) == "sept " );
    REQUIRE( toFrench(8) == "huit " );
    REQUIRE( toFrench(9) == "neuf " );
    REQUIRE( toFrench(10) == "dix " );
    REQUIRE( toFrench(11) == "onze " );
    REQUIRE( toFrench(12) == "douze " );
    REQUIRE( toFrench(13) == "treize " );
    REQUIRE( toFrench(14) == "quatorze " );
    REQUIRE( toFrench(15) == "quinze " );
    REQUIRE( toFrench(16) == "seize " );
    REQUIRE( toFrench(17) == "dix-sept " );
    REQUIRE( toFrench(18) == "dix-huit " );
    REQUIRE( toFrench(19) == "dix-neuf " );
    REQUIRE( toFrench(20) == "vingt " );
    REQUIRE( toFrench(21) == "vingt et un " );
    REQUIRE( toFrench(30) == "trente " );
    REQUIRE( toFrench(31) == "trente et un " );
    REQUIRE( toFrench(40) == "quarante " );
    REQUIRE( toFrench(41) == "quarante et un " );
    REQUIRE( toFrench(50) == "cinquante " );
    REQUIRE( toFrench(51) == "cinquante et un " );
    REQUIRE( toFrench(60) == "soixante " );
    REQUIRE( toFrench(61) == "soixante et un " );
    REQUIRE( toFrench(70) == "soixante-dix " );
    REQUIRE( toFrench(79) == "soixante-dix-neuf " );
    REQUIRE( toFrench(80) == "quatre-vingts " );
    REQUIRE( toFrench(81) == "quatre-vingt-un " );
    REQUIRE( toFrench(99) == "quatre-vingt-dix-neuf " );
    REQUIRE( toFrench(100) == "cent " );  
    REQUIRE( toFrench(101) == "cent un " );
    REQUIRE( toFrench(122) == "cent vingt-deux " );
    REQUIRE( toFrench(125) == "cent vingt-cinq " );
    REQUIRE( toFrench(1000) == "mille " );
    REQUIRE( toFrench(1001) == "mille un " );
    REQUIRE( toFrench(10000) == "dix mille " );
    REQUIRE( toFrench(100000) == "cent mille " );
    REQUIRE( toFrench(1000000) == "un million " );
    REQUIRE( toFrench(1000001) == "un million un " );
    REQUIRE( toFrench(1000000000) == "un milliard " );
    REQUIRE( toFrench(1000000001) == "un milliard un " );  
    REQUIRE( toFrench(984738456123) == "neuf cent quatre-vingt-quatre milliards sept cent trente-huit millions quatre cent cinquante-six mille cent vingt-trois " );
}
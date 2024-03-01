#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "../main/Solution.cpp"
#include <cstdint>

TEST_CASE("Test case 1", "[fullJustify]")
{
    Solution s;
    vector<string> input{"This", "is", "an", "example", "of", "text", "justification."};
    vector<string> expect{
        "This    is    an",
        "example  of text",
        "justification.  "};
    vector<string> output = s.fullJustify(input,16);
    REQUIRE(output.size() == 3);
    for (int i= 0; i < expect.size(); i++) {
        REQUIRE(output[i] == expect[i]);
    }
}
TEST_CASE("Test case 2", "[fullJustify]")
{
    Solution s;
    vector<string> input{"What","must","be","acknowledgment","shall","be"};
    vector<string> expect{
        "What   must   be",
        "acknowledgment  ",
        "shall be        "};
    vector<string> output = s.fullJustify(input,16);
    REQUIRE(output.size() == 3);
    for (int i= 0; i < expect.size(); i++) {
        REQUIRE(output[i] == expect[i]);
    }
}
TEST_CASE("Test case 3", "[fullJustify]")
{
    Solution s;
    vector<string> input{"Science","is","what","we","understand","well","enough","to","explain","to","a","computer.","Art","is","everything","else","we","do"};
    vector<string> expect{
        "Science  is  what we",
        "understand      well",
        "enough to explain to",
        "a  computer.  Art is",
        "everything  else  we",
        "do                  "};
    vector<string> output = s.fullJustify(input,20);
    REQUIRE(output.size() == 6);
    for (int i= 0; i < expect.size(); i++) {
        REQUIRE(output[i] == expect[i]);
    }
}
TEST_CASE("Test case 4", "[fullJustify]")
{
    Solution s;
    vector<string> input{"S"};
    vector<string> expect{
        "S"
    };
    vector<string> output = s.fullJustify(input,1);
    REQUIRE(output.size() == 1);
    for (int i= 0; i < expect.size(); i++) {
        REQUIRE(output[i] == expect[i]);
    }
}
TEST_CASE("Test case 5", "[fullJustify]")
{
    Solution s;
    vector<string> input{"S"};
    vector<string> expect{
        "S         "
    };
    vector<string> output = s.fullJustify(input,10);
    REQUIRE(output.size() == 1);
    for (int i= 0; i < expect.size(); i++) {
        REQUIRE(output[i] == expect[i]);
    }
}
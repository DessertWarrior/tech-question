#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "../main/solution.cpp"
#include <cstdint>

TEST_CASE("Test case 1", "[groupAnagrams]")
{
    Solution s;
    vector<string> v;
    v.push_back("cat");
    v.push_back("atc");
    v.push_back("tea");
    v.push_back("cta");
    v.push_back("ate");
    v.push_back(" ");
    vector<vector<string>> data =s.groupAnagrams(v);

    REQUIRE(data[0].size()== 1);

    REQUIRE(data[1].size()== 2);

    REQUIRE(data[2].size()== 3);

}
TEST_CASE("Test case 2", "[groupAnagrams]")
{
    Solution s;
    vector<string> v;
    v.push_back("cat");
    vector<vector<string>> data =s.groupAnagrams(v);

    REQUIRE(data[0].size()== 1);
}
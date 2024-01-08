#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "../main/solution.cpp"
#include <cstdint>

TEST_CASE("Test case 1", "[LRUCache]")
{
    LRUCache *cache = new LRUCache(2);
    cache->put(1, 1);
    cache->put(2, 2);
    REQUIRE(cache->get(1) == 1); // returns 1
    cache->put(3, 3);            // evicts key 2
    REQUIRE(cache->get(2) == -1); // returns -1 (not found)
    cache->put(4, 4);            // evicts key 1
    REQUIRE(cache->get(1) == -1); // returns -1 (not found)
    REQUIRE(cache->get(3) == 3); // returns 3
    REQUIRE(cache->get(4) == 4); // returns 4
}
TEST_CASE("Test case 2", "[LRUCache]")
{
    LRUCache *cache = new LRUCache(2);
    REQUIRE(cache->get(2) == -1); // returns -1
    cache->put(2, 6);
    REQUIRE(cache->get(1) == -1); // returns -1
    cache->put(1, 5);
    cache->put(1, 2);
    REQUIRE(cache->get(1) == 2); // returns 2
    REQUIRE(cache->get(2) == 6); // returns 6
    cache->put(3, 3);            // evicts key 1
    REQUIRE(cache->get(2) == 6); // returns 6
    REQUIRE(cache->get(1) == -1); // returns -1
    REQUIRE(cache->get(3) == 3); // returns 3
}
TEST_CASE("Test case 3", "[LRUCache]")
{
    LRUCache *cache = new LRUCache(1);
    cache->put(2, 1);
    cache->put(1, 1);
    cache->put(2, 3);
    cache->put(4, 1);
    REQUIRE(cache->get(4) == 1); // returns 1
    REQUIRE(cache->get(2) == -1); // returns -1
}
TEST_CASE("Test case 4", "[LRUCache]")
{
    LRUCache *cache = new LRUCache(3);
    cache->put(2, 1);
    cache->put(1, 1);
    cache->put(2, 3);
    cache->put(4, 1);
    REQUIRE(cache->get(1) == 1); // returns 1
    REQUIRE(cache->get(2) == 3); // returns 3
    REQUIRE(cache->get(4) == 1); // returns 1
}  
TEST_CASE("Test case 5", "[LRUCache]")
{
    LRUCache *cache = new LRUCache(2);
    cache->put(2, 1);
    REQUIRE(cache->get(2) == 1); // returns 1
    for (int i = 0; i < pow(10,5); i++)
    {
        cache->put(i, i);
        REQUIRE(cache->get(i) == i); // returns 1
    }
    REQUIRE(cache->get(1) == -1); // returns 1
    REQUIRE(cache->get(pow(10,5)-1) == pow(10,5)-1);
    REQUIRE(cache->get(pow(10,5)-2) == pow(10,5)-2); 
}
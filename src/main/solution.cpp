#include <string>
#include <stack>
#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <climits>
using namespace std;
class Solution {
public:
//  current is the current coin choice
    int findMinCoin(vector<int>& coins, int amount,int current = 0) {
        // if the coin selection is out of bound, or amount equal or below 0
        if (current >= coins.size() || amount <= 0) {
            return amount == 0 ? 0 : INT_MAX-1;    //if the amount count exactly, we return 0, else maxint-1
        }

        // if amount is too big for the coin, switch over to other coin.
        
        int result;
        if (amount < coins[current]) {
            int otherCoin = 0 + findMinCoin(coins,amount,current+1);
            result = otherCoin;
        }
        else {
            // if amount is bigger than coin, we have two choices.
            // 1. take 1 coin.
            // 2. switch to the other coin.
            int coin = 1 + findMinCoin(coins,amount-coins[current],current);
            int otherCoin = 0 + findMinCoin(coins,amount, current+1);
            // we find the minimum amount of coins required.
            // and because we return as INT_MAX-1, if both failed
            // we return as INT_MAX -1;
            result = min(coin,otherCoin);
        }
        return result;
    }
    int coinChange(vector<int>& coins, int amount) {
        int result = findMinCoin(coins,amount);  //we either going to return min amount or INT_MAX-1
        return (result == INT_MAX-1)? -1 : result;
    }
};
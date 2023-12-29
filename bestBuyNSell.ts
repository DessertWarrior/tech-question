function maxProfit(prices: number[]): number {
    /* Time complexity: O(n) */
    /* Completion Time: 18:46.73 */
    // Psudocode:
    // 1. loop thru the prices array. Starting from 1
    // 2. if target is larger than current. store current to target
    // 3. if target is smaller than current. Calculate total, if larger than profit, replace.
    let profit: number = 0;
    let target: number = prices[0];
    for (let i: number = 1; i < prices.length; i++) {
        if (target >= prices[i]) target = prices[i];
        else (prices[i]-target > profit)? profit = prices[i]-target:null;
    }
    return profit;
};

export {maxProfit}
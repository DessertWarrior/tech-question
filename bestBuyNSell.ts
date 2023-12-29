function maxProfit(prices: number[]): number {
    /* Time complexity: O(n) */
    /* Completion Time: 19.59.39 */
    // Psudocode:
    // 1. loop thru the prices array. Starting from 1
    // 2. if target is larger than current. 
        // 2.1. set target to current.
        // 2.2. Add selling profit to total profit.
        // 2.3. selling profit return to 0
    // 3. if target is smaller than current. Add profit to total
    let totalProfit: number = 0;
    let target: number = prices[0];
    for (let i: number = 1; i < prices.length; i++) {
        if (target < prices[i]) 
            totalProfit += prices[i]- target;
        target = prices[i];
    }
    return totalProfit;
};

export {maxProfit}
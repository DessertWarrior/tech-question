function canJump(nums: number[]): number {
    /* Time Complexity: O(n)*/
    /* Completion time: 9.08.77 */
    // Psudocode:
    // 1. loop thru nums array
    // 2. if nums[i] + i > max
    // 2.1 update max
    // 3. if i == maxMove
    // 3.1 we jump by max of adding i + num[i]
    // 3.2 we add steps by one.
    // 3. 
    let maxMove = 0;
    let max = 0;
    let steps = 0;
    for (let i = 0; i < nums.length-1; i++) {
        if (nums[i] + i > max)  max = nums[i] + i;
        if (i == maxMove) {
            maxMove = max;
            steps++;
            if (maxMove >= nums.length-1)
                break;
        }
    }
    return steps;
};
export {canJump};
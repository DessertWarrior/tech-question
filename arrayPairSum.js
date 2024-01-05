/**
 * @param {number[]} nums
 * @return {number}
 */
var arrayPairSum = function(nums) {
    nums.sort((a,b)=>a-b);
    //get odd numbers
    let total = 0;
    for (let i = 0; i < nums.length; i+=2) {
        total += nums[i];
    }
    return total;
};
export { arrayPairSum };
/**
 * @param {number[]} nums
 * @return {number[]}
 */
var sortArrayByParity = function(nums) {
    let index = 0;
    for(let i = 0; i < nums.length; i++){
        //if given val is even, replace the one that's in the index
        if (nums[i] % 2 == 0) {
            let temp = nums[index];
            nums[index] = nums[i];
            nums[i] = temp;
            index ++;
        }
    }
    return nums;
};

export { sortArrayByParity }
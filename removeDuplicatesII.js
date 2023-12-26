var removeDuplicates = function(nums) {
    //nums.length >= 1
    if (nums.length < 3)
        return nums.length;
    let k = nums.length;
    
    for (let i = 2; i < k; i++) {
        if (nums[i]== nums[i-1] && nums[i] == nums[i-2]) {
            for (let j = i+1; j < nums.length; j++) {
                nums[j-1] = nums[j];
            }
            k--;
            i--;
        }
    }
    return k;
};
export { removeDuplicates };
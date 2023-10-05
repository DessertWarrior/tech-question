/**
 * @param {number[]} nums
 * @param {number} val
 * @return {number}
 */
var removeElement = function(nums, val) {
    let length = nums.length;
    //edge cases
    if (nums.length === 0 || val > 50) return nums.length;
    
    // go thru entire nums array
    for (let i = 0; i < nums.length;i++) {
        if (nums[i] === val) {
            nums.splice(i,1);
            nums.push(null);
            length--;
            i--;
        }
    }
    //if num equal to val, splice and push a null to the end
    return length;
};
export default removeElement;
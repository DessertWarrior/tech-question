/**
 * @param {number[]} nums
 * @return {number}
 */
// completion time: 7 minutes
var removeDuplicates = function(nums) {
    if (nums.length === 1) return 1;

    let length = nums.length;
    let prev = nums[0];
    for (let i = 1; i < nums.length; i++) {
        // if the current === prev
        if (nums[i] == null) break; //exit for loop
        else if (nums[i] === prev) {
            nums.splice(i,1);   //remove the current index val
            nums.push(null);    //push the deleted index to the end
            //during this process. the current index(removed) become next val
            i--;    //therefore, we need to reduce i by 1
            length--;   //also reduce the k length by 1
        }
        else {
            prev = nums[i];
        }

    }
    return length;
};
export default removeDuplicates;
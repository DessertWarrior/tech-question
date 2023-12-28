/**
 * @param {number[]} nums
 * @return {number}
 */
var majorityElement = function (nums) {
  let numCount = {};
  for (let i = 0; i < nums.length; i++) {
    if (numCount[nums[i]]) numCount[nums[i]]++;
    else numCount[nums[i]] = 1;
  }
  //finding the nums with most count
  for (let num in numCount) {
    if (numCount[num] > nums.length / 2) {
      console.log(num);
      return parseInt(num);
    }
  }
};
var majorityElementLinear = function(nums) {
  let counter = 0;
  let target;
  for (let i = 0; i < nums.length; i++) {
    if (counter == 0 ) target = nums[i];
    counter += nums[i] ==target ? 1: -1
  }


  return target;
}
export {majorityElement,majorityElementLinear};

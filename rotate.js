/**
 * @param {number[]} nums
 * @param {number} k
 * @return {void} Do not return anything, modify nums in-place instead.
 */
var rotate = function (nums, k) {
  /* Time complexity: n */
  /* Time completion: 40:59.16 */
  let last;
  k = k % nums.length;
  for (let i = 0; i < k; i++) {
    last = nums.pop();
    nums.unshift(last);
  }
};
var rotateI = function (nums, k) {
  /* Time complexity: n */
  /* Time completion: 15:22.14 */
  k = k % nums.length;
  let arrayToForward = nums.splice(nums.length - k, k);
  console.log(arrayToForward);
  for (let i = k - 1; i >= 0; i--) {
    nums.unshift(arrayToForward[i]);
  }
};
export { rotate,rotateI };

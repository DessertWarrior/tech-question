/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function (nums, target) {
  //sort in asc
  // then pick first two, if needs bigger, second increase,
  // once it become too big. second --, first ++.
  let obj = {};
  for (let i = 0; i < nums.length; i++) {
    if (obj[nums[i]] === undefined)
      // if val is not there yet
      obj[target - nums[i]] =
        i; // target-num is the value we expected to get in later examination
    //if we found that wanted value in current index
    else return [obj[nums[i]], i];
  }

  // // nested for loop
  // for (let i = 0; i < nums.length; i++) {
  //     // first element
  //     let first = nums[i]; // int
  //     for (let j = i+1; j < nums.length; j++) {
  //         if (first + nums[j] == target)
  //             return [i,j];
  //     }
  // }
};

export { twoSum }

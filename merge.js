/**
 * @param {number[]} nums1
 * @param {number} m
 * @param {number[]} nums2
 * @param {number} n
 * @return {void} Do not return anything, modify nums1 in-place instead.
 */
var merge = function(nums1, m, nums2, n) {
    //create index for num1 and num2 num1 is going to be the location
    let index2 = 0;
    //for index 0 to num1
    //check if index1 is bigger than index2
    //use splice
    let length = m+n;
    for (let index1= 0; index1 < length; index1++) {
        if (nums1[index1] > nums2[index2]){
            nums1.splice(index1,0, nums2[index2]);
            nums1.pop(); //remove the last item 0
            m++;
            index2++;
        }
        else if (m <= index1)    //if empty index reached
        {
            nums1.splice(index1,1,nums2[index2]);
            index2++;
        }
            
    }
    //if num1index smaller than nums2, index1++
};
export default merge;

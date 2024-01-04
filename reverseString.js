/**
 * @param {character[]} s
 * @return {void} Do not return anything, modify s in-place instead.
 */
var reverseString = function (s) {
  let temp;
  for (let t1 = 0, t2 = s.length - 1; t1 < t2; t1++, t2--) {
    temp = s[t1];
    s[t1] = s[t2];
    s[t2] = temp;
    
  }
  // let t1 = 0;  //first element
  // let t2 = s.length-1; //last element
  // let temp; //temporary value
  // // as long as t1 index is smaller than t2 index.
  // // we know that we can continue swapping
  // while (t1 < t2) {
  //     let temp = s[t1];
  //     s[t1] = s[t2];
  //     s[t2] = temp;
  //     t1++;
  //     t2--;
  // }
  return s;
};
export { reverseString };
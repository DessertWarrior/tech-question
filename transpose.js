/**
 * @param {number[][]} matrix
 * @return {number[][]}
 */
var transpose = function (matrix) {
  // transpose means [0][1] to [1][0]
  let result = [];
  for (let i = 0; i < matrix[0].length; i++) {
    let arr = [];
    for (let j = 0; j < matrix.length; j++) {
      arr.push(matrix[j][i]);
    }
    result.push(arr);
  }
  console.log(result);
  return result;
};
export {transpose}

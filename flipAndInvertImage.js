/**
 * @param {number[][]} image
 * @return {number[][]}
 */
var flipAndInvertImage = function (image) {
  let rowLength = image[0].length;
  for (let i = 0; i < image.length; i++) {
    //array is being fliped and inverted
    for (let j = 0; j < rowLength / 2; j++) {
        let temp = !image[i][rowLength - 1 - j] +0;
        image[i][rowLength - 1 - j] = !image[i][j]+0;
        image[i][j] = temp;
    }
  }
  return image;
};

export { flipAndInvertImage };

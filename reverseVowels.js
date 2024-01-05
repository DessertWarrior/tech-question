/**
 * @param {string} s
 * @return {string}
 */
var reverseVowels = function (s) {
  let vowel = ["a", "e", "i", "o", "u"];
  let result = s.split("");
  //since we need swap the vowels of a string and return new string
  // we can check both sides of vowels and until the lower end is equal or bigger than higher
  // if both sides are vowel then swap it. if one side is not, that side ++
    let high = result.length-1, low = 0;
    while (low < high) {
        if (vowel.indexOf(result[low].toLowerCase())!= -1 &&
        vowel.indexOf(result[high].toLowerCase())!= -1) {
            let temp = result[low];
            result[low] = result[high];
            result[high] = temp;
            low ++;
            high --;
        }
        else if (vowel.indexOf(result[low].toLowerCase())!= -1) {
            high --;
        }
        else if (vowel.indexOf(result[high].toLowerCase())!= -1) {
            low++;
        }
        else {
            high --;
            low ++;
        }

    }
    
    return result.join('');
};

export { reverseVowels}
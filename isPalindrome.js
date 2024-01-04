/**
 * @param {string} s
 * @return {boolean}
 */
var isPalindrome = function (s) {
  //make it a string that contain only alphabets
  let result = "";
  for (let i = s.length - 1; i >= 0; i--) {
    if (s[i].match(/[a-zA-Z0-9]/)) 
      result += s[i].toLowerCase();
  }
  //reverse the string. If its in c++, i can just reverse call it
  for (let i = 0; i < result.length; i++) {
    if (result[i] != result[result.length - 1 - i]) return false;
  }
  return true;
};

export { isPalindrome };

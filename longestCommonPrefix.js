/**
 * @param {string[]} strs
 * @return {string}
 */
var longestCommonPrefix = function (strs) {
  let prefix = strs[0];
  for (let i = 0; i < prefix.length; i++) {
    for (let j = 1; j < strs.length; j++) {
      if (i >= strs[j].length) return prefix.substring(0, i);
      else if (prefix[i] != strs[j][i]) {
        //we found the difference. now 0,i is the string location.
        return prefix.substring(0, i);
      }
    }
  }
  return prefix;
};

export {longestCommonPrefix} 
/**
 * @param {string} str1
 * @param {string} str2
 * @return {boolean}
 */
var isAnagram = function(str1, str2) {
    let obj = {}
    if (str1.length != str2.length) return false;
    for (let i = 0; i < str1.length; i++) {
        if (obj[str1[i]] === undefined)
            obj[str1[i]] = 1;
        else
            obj[str1[i]]++;

        if (obj[str2[i]] === undefined)
            obj[str2[i]] = -1;
        else
            obj[str2[i]]--;
    }
    for (let value of Object.values(obj)) {
        if (value != 0) return false; 
    }
    return true;
};

export {isAnagram}
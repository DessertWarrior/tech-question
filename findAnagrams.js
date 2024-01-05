/**
 * @param {string} s
 * @param {string} p
 * @return {number[]}
 */
var findAnagrams = function (s, p) {
    if (s.length < p.length) return [];
    let result = [];
    //use sliding pattern algorith,
    //store p inside obj
    let obj = {};
    //store the p element and s element into obj first.
    for (let i = 0; i < p.length; i++) {
        if (obj[s[i]]=== undefined)
            obj[s[i]] = 1;
        else
            obj[s[i]] ++;
        
        if (obj[p[i]]=== undefined)
            obj[p[i]] = -1;
        else
            obj[p[i]] --;
    }
    //check if matches
    if(isAnagram(obj))
        result.push(0);
    for (let i =p.length,start =0; i< s.length; i++,start++) {
        
        obj[s[start]]--;
        if (obj[s[i]]===undefined)
            obj[s[i]] =1;
        else
            obj[s[i]]++;
        if (isAnagram(obj))
            result.push(start+1);
    }
    return result;
};
var isAnagram=function(obj) {
    for (let value of Object.values(obj)) {
        
        if (value != 0)
            return false;
    }
    return true;
}
export { findAnagrams}
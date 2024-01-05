/**
 * @param {number[][]} intervals
 * @return {number[][]}
 */
var merge = function(intervals) {
    let result = [intervals[0]];
    //sort it in asc
    intervals.sort((a,b)=>a[0]-b[0]);

    // previous interval: used for comparing with next interval
    let prevIndex = 0;
    for (let i = 1; i < intervals.length; i ++) {
        // if the previous interval is not connected to current
        if (result[prevIndex][1] < intervals[i][0]) {
            prevIndex++;
            //add the disconnect interval to the result arr
            result.push(intervals[i]);
        } 
        else {
            //if the end interval of current is bigger
            if (result[prevIndex][1] < intervals[i][1]) {
                result[prevIndex][1] = intervals[i][1];
            }
        } 
    }
    return result;
};

export { merge };


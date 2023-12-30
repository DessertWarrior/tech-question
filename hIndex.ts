function hIndex(citations: number[]): number {
    /* Time Completion: 1:02:44.23 */
    /* Space Complexity: O(1) */
    /* Time Complexity: O(nlogn) */
    // Process:
    // 1. we know that maximum can be n citations and n papers
    // 2. then if we check if there are half paper or more contain n/2 citations
    // 3. we set the amount of citations to match.
    let end1 = citations.length;
    let end2 = 0; 
    let p = 0;
    let h = 0;
    // only worst case if its 0.
    for (let j=0; j< citations.length; j++) {
        // if end1 and end2 are same. Meaning that we have searched whole array
        let c = Math.ceil((end1+end2)/2);
        if (end1 == end2) break;
        for (let i = 0; i < citations.length; i++) {
            if (citations[i] >= c) p++;
        }
        // if expected paper is more than actual.
        if (c > p) {
            end1 =  c;
        }
        else if (c < p) {
            h = c;
            end2 = c;
        }
        else 
            return c;
        p = 0;  //reset p
    }
    return h;
    
};
export {hIndex};
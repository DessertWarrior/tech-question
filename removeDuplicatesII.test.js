import { removeDuplicates } from './removeDuplicatesII.js';
import { describe,it,expect } from 'vitest';

describe("removeDuplicates", () => {
    
    it('should be k = 5, input = [1,1,2,2,3]', () => {
        let input = [1,1,1,2,2,3];
        let k = removeDuplicates(input);
        expect(k).toEqual(5);
        expect(input.slice(0,5)).toEqual([1,1,2,2,3]);
    })
    it('should be k = 7, input = [0,0,1,1,2,3,3]', () => {
        let input = [0,0,1,1,1,1,2,3,3];
        let k = removeDuplicates(input);
        expect(k).toEqual(7);
        expect(input.slice(0,7)).toEqual([0,0,1,1,2,3,3]);
    })

    
})
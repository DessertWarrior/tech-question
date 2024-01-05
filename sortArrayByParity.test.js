import { expect, it,describe } from 'vitest';
import {sortArrayByParity} from './sortArrayByParity.js';

describe('sortArrayByParity', () => {
    it('should return [2,4,3,1]', () => {
        expect(sortArrayByParity([3,1,2,4])).toEqual([2,4,3,1]);
    });
    it('should return [0]', () => {
        expect(sortArrayByParity([0])).toEqual([0]);
    });
    it('should return [2, 4, 6, 1, 5, 3]', () => { 
        expect(sortArrayByParity([1,2,3,4,5,6])).toEqual([2, 4, 6, 1, 5, 3]);
    });
});

import { expect, it,describe } from 'vitest';
import {twoSum} from './twoSum.js';

describe('twoSum', () => {
    it('should return [2,5]', () => {
        expect(twoSum([1, 2, 3, 4, 5, 6], 11)).toEqual([4,5]);
    });
    it('should return [0,1]', () => {
        expect(twoSum([2, 7, 11, 15], 9)).toEqual([0,1]);
    });
    it('should return [0,1]', () => {
        expect(twoSum([3, 3], 6)).toEqual([0,1]);
    });
    it('should return [1,2]', () => {
        expect(twoSum([3, 2, 4], 6)).toEqual([1,2]);
    });
    it('should return [0,2]', () => {
        expect(twoSum([3, 2, 3], 6)).toEqual([0,2]);
    });
    it('should return [0,1]', () => {
        expect(twoSum([3, 2, 4], 5)).toEqual([0,1]);
    });
});

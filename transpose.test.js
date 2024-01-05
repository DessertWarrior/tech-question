import { expect, it,describe } from 'vitest';
import {transpose} from './transpose.js';

describe('transpose', () => {
    it('should return [[1,4,7],[2,5,8],[3,6,9]]', () => {
        expect(transpose([[1, 2, 3],[4, 5, 6],[7, 8, 9]])).toEqual([[1,4,7],[2,5,8],[3,6,9]]);
    });
    it('should return [[1,4],[2,5],[3,6]]', () => {
        expect(transpose([[1, 2, 3],[4, 5, 6]])).toEqual([[1,4],[2,5],[3,6]]);
    });
    it('should return [[0]]', () => {
        expect(transpose([[0]])).toEqual([[0]]);
    });
    it('should return [[1,4,6,7],[2,5,3,6],[2,5,1,5]]', () => {
        expect(transpose([[1,2,2],[4,5,5],[6,3,1],[7,6,5]])).toEqual([[1,4,6,7],[2,5,3,6],[2,5,1,5]]);
    });

});

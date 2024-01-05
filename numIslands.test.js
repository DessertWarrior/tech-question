import { expect, it,describe } from 'vitest';
import {numIslands} from './numIslands.js';

describe('numIslands', () => {
    it('should return 1', () => {
        expect(numIslands([["1","1","1","1","0"],
                           ["1","1","0","1","0"],
                           ["1","1","0","0","0"],
                           ["0","0","0","0","0"]])).toEqual(1);
    });
    it('should return 3', () => {
        expect(numIslands([["1","1","0","0","0"],
                           ["1","1","0","0","0"],
                           ["0","0","1","0","0"],
                           ["0","0","0","1","1"]])).toEqual(3);
    });
    it('should return 1', () => {
        expect(numIslands([["1","1","1"],
                           ["0","1","0"],
                           ["1","1","1"]])).toEqual(1);
    });
    it('should return 1', () => {
        expect(numIslands([["1","0","1","1","1"],
                           ["1","0","1","0","1"],
                           ["1","1","1","0","1"]])).toEqual(1);
    });
    it('should return 3', () => {
        expect(numIslands([["1","0","1","1","1"],
                           ["1","0","1","0","0"],
                           ["1","0","1","0","1"]])).toEqual(3);
    });
});

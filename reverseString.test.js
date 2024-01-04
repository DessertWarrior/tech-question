import { expect, it,describe } from 'vitest';
import {reverseString} from './reverseString.js';

describe('reverseString', () => {
    it('should return the reversed string', () => {
        expect(reverseString(["b", "s", "n", "t", "o", "r"])).toEqual(["r", "o", "t", "n", "s", "b"]);
        
    });
    it('should return the reversed string', () => {
        expect(reverseString(["b", "s", "n", "o", "b"])).toEqual(["b", "o", "n", "s", "b"]);
        
    });
    it('should return the reversed string', () => {
        expect(reverseString(["b", "s", "n", "t", "o", "r", "b", "s", "n", "t", "o", "r"])).toEqual(["r", "o", "t", "n", "s", "b", "r", "o", "t", "n", "s", "b"]);
        
    });
    it('should return the reversed string', () => {
        expect(reverseString(["R","R","R","R","R","R","R","R","R","R","R","R","R","R","R","R","R","R"])).toEqual(["R","R","R","R","R","R","R","R","R","R","R","R","R","R","R","R","R","R"]);
    });
    it('should return the reversed string', () => {
        expect(reverseString(["h"])).toEqual(["h"]);
    });
    it('should return the reversed string', () => {
        expect(reverseString(["H","a","n","n","a","h"])).toEqual(["h","a","n","n","a","H"]);
    });
    it('should return the reversed string', () => {
        expect(reverseString(["h","e","l","l","o"])).toEqual(["o","l","l","e","h"]);
    });

});
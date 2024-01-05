import { expect, it,describe } from 'vitest';
import {longestCommonPrefix} from './longestCommonPrefix.js';

describe('reverseVowels', () => {
    it('should return "fl" for ["flower", "flowey", "flow"]', () => {
        expect(longestCommonPrefix(["flower", "flowey", "flow"])).toBe("flow");
    });
    it('should return " s" for [" s", " sflowey", " sflow"]', () => {
        expect(longestCommonPrefix([" s", " sflowey", " sflow"])).toBe(" s");
    });
    it('should return "" for ["dog","racecar","car"]', () => {
        expect(longestCommonPrefix(["dog","racecar","car"])).toBe("");
    });
    it('should return "dog" for ["dog","dog","dog"]', () => {
        expect(longestCommonPrefix(["dog","dog","dog"])).toBe("dog");
    });
    it('should return "" for [" ","b"]', () => {
        expect(longestCommonPrefix([" ","b"])).toBe("");
    });
    it('should return "" for ["flllll","fllll ll"]', () => {
        expect(longestCommonPrefix(["flllll","fllll ll"])).toBe("fllll");
    });

});
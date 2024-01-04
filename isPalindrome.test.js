import { expect, it,describe } from 'vitest';
import {isPalindrome} from './isPalindrome.js';

describe('detectCapitalUse', () => {
    it('should return true', () => {
        expect(isPalindrome('abba')).toBe(true);
    });
    it('should return false', () => {
        expect(isPalindrome('abc')).toBe(false);
    });
    it('should return true', () => {
        expect(isPalindrome('a b cb b cba')).toBe(true);
    });
    it('should return true', () => {
        expect(isPalindrome('1 a b Cb A 1')).toBe(true);
    });
    it('should return true', () => {
        expect(isPalindrome(' ')).toBe(true);
    });
    it('should return true', () => {
        expect(isPalindrome('i')).toBe(true);
    });
    it('should return true', () => {
        expect(isPalindrome('hello this is a message')).toBe(false);
    });
    it('should return true', () => {
        expect(isPalindrome('aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa'))
        .toBe(true);
    });

});
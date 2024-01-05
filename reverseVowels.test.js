import { expect, it,describe } from 'vitest';
import {reverseVowels} from './reverseVowels.js';

describe('reverseVowels', () => {
    it('should return "holle" when input "hello"', () => {
        expect(reverseVowels("hello")).toEqual("holle");
    });
    it('should return " " when input " "', () => {
        expect(reverseVowels(" ")).toEqual(" ");
    });
    it('should return "123" when input "123"', () => {
        expect(reverseVowels("123")).toEqual("123");
    });
    it('should return " holle" when input " hello"', () => {
        expect(reverseVowels(" hello")).toEqual(" holle");
    });
    it('should return "e" when input "e"', () => {
        expect(reverseVowels("e")).toEqual("e");
    });
    it('should return "ea" when input "ae"', () => {
        expect(reverseVowels("ae")).toEqual("ea");
    });
    it('should return "AE" when input "EA"', () => {
        expect(reverseVowels("EA")).toEqual("AE");
    });

});
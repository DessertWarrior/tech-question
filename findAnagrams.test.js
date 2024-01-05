import { expect, it, describe } from "vitest";
import { findAnagrams } from "./findAnagrams.js";

describe("findAnagrams", () => {
  it("should return [0,6] when input is 'cbaebabacd', 'abc'", () => {
    expect(findAnagrams("cbaebabacd", "abc")).toEqual([0, 6]);
  });
    it("should return [0,1,2] when input is 'abab', 'ab'", () => {
        expect(findAnagrams("abab", "ab")).toEqual([0, 1, 2]);
    });
    it("should return [0,2] when input is 'abba', 'ab'", () => {
        expect(findAnagrams("abba", "ab")).toEqual([0, 2]);
    });
    it("should return [6,12,19] when input is 'wjekljweaglnewlagnlweag', 'we'", () => {
        expect(findAnagrams("wjekljweaglnewlagnlweag","we")).toEqual([6,12,19]);
    });
});

import { expect, it, describe } from "vitest";
import { isAnagram } from "./isAnagram.js";

describe("isAnagram", () => {
  it("should return true", () => {
    expect(isAnagram("anagram", "nagaram")).toEqual(true);
  });
  it("should return false", () => {
    expect(isAnagram("rat", "car")).toEqual(false);
  });
  it("should return false", () => {
    expect(isAnagram("a", "ab")).toEqual(false);
  });
  it("should return false", () => {
    expect(isAnagram("ab", "a")).toEqual(false);
  });
  it("should return true", () => {
    expect(isAnagram("a", "a")).toEqual(true);
  });
  it("should return false", () => {
    expect(isAnagram("b", "a")).toEqual(false);
  });
  it("should return true", () => {
    expect(isAnagram("abcdefgh", "ahgfdecb")).toEqual(true);
  });
});

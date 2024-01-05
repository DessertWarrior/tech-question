import { expect, it, describe } from "vitest";
import { arrayPairSum } from "./arrayPairSum.js";

describe("arrayPairSum", () => {
  it("should return 4", () => {
    expect(arrayPairSum([1, 4, 3, 2])).toEqual(4);
  });
  it("should return 9", () => {
    expect(arrayPairSum([6, 2, 6, 5, 1, 2])).toEqual(9);
  });
  it("should return 4", () => {
    expect(arrayPairSum([1, 4, 3, 7])).toEqual(5);
  });
  it("should return 4", () => {
    expect(arrayPairSum([1, 4, 3, 2,6,1,7,3])).toEqual(12);
  });
});

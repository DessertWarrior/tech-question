import { describe, expect, it } from "vitest";
import { majorityElement, majorityElementLinear } from "./majorityElement";

describe("majorityElement", () => {
  it("should return 3", () => {
    expect(majorityElement([3, 2, 3])).toEqual(3);
  });
  it("should return 0", () => {
    expect(majorityElement([1, 0, 0, 0, 3])).toEqual(0);
  });
  it("should return 2", () => {
    expect(majorityElement([2, 2, 1, 1, 1, 2, 2])).toEqual(2);
  });
  it("should return 4", () => {
    expect(
      majorityElement([1, 5, 2, 3, 6, 6, 4, 9, 4, 4, 4, 4, 8, 4, 4, 4, 4])
    ).toEqual(4);
  });
});
describe("majorityElementLinear", () => {
  it("should return 3", () => {
    expect(majorityElementLinear([3, 2, 3])).toEqual(3);
  });
  it("should return 0", () => {
    expect(majorityElementLinear([1, 0, 0, 0, 3])).toEqual(0);
  });
  it("should return 2", () => {
    expect(majorityElementLinear([2, 2, 1, 1, 1, 2, 2])).toEqual(2);
  });
  it("should return 4", () => {
    expect(
      majorityElementLinear([1, 5, 2, 3, 6, 6, 4, 9, 4, 4, 4, 4, 8, 4, 4, 4, 4])
    ).toEqual(4);
  });
  it("should return 1", () => {
    expect(majorityElementLinear([0, 1, 0, 1, 2, 2, 1, 1, 1])).toEqual(1);
  });
});

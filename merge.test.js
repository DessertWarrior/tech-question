import { expect, it, describe } from "vitest";
import { merge } from "./merge.js";

describe("merge", () => {
  it("should return [[1,6],[8,10],[15,18]]", () => {
    expect(
      merge([
        [1, 3],
        [2, 6],
        [8, 10],
        [15, 18],
      ])
    ).toEqual([
      [1, 6],
      [8, 10],
      [15, 18],
    ]);
  });
  it("should return [[1,5]]", () => {
    expect(
      merge([
        [1, 4],
        [4, 5],
      ])
    ).toEqual([[1, 5]]);
  });
  it("should return [[1]]", () => {
    expect(merge([[1]])).toEqual([[1]]);
  });
  it("should return [[0,30]]", () => {
    expect(
      merge([
        [1, 30],
        [2, 6],
        [8, 10],
        [15, 18],
      ])
    ).toEqual([[1, 30]]);
  });
  it("should return [[0,30]]", () => {
    expect(
      merge([
        [1, 3],
        [2, 6],
        [1, 17],
        [15, 30],
      ])
    ).toEqual([[1, 30]]);
  });
});

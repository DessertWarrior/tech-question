import { expect, it, describe } from "vitest";
import { flipAndInvertImage } from "./flipAndInvertImage.js";

describe("flipAndInvertImage", () => {
  it("should return [[1,0,0],[0,1,0],[1,1,1]]", () => {
    expect(
      flipAndInvertImage([
        [1, 1, 0],
        [1, 0, 1],
        [0, 0, 0],
      ])
    ).toEqual([
      [1, 0, 0],
      [0, 1, 0],
      [1, 1, 1],
    ]);
  });
  it("should return [ [ 1, 1, 0, 0 ], [ 0, 1, 1, 0 ], [ 0, 0, 0, 1 ], [ 1, 0, 1, 0 ] ]", () => {
    expect(
      flipAndInvertImage([
        [1, 1, 0, 0],
        [1, 0, 0, 1],
        [0, 1, 1, 1],
        [1, 0, 1, 0],
      ])
    ).toEqual([
      [1, 1, 0, 0],
      [0, 1, 1, 0],
      [0, 0, 0, 1],
      [1, 0, 1, 0],
    ]);
  });
  it("should return [[1,0,0],[0,1,0],[1,1,1],[1,0,1]]", () => {
    expect(
      flipAndInvertImage([
        [1, 1, 0],
        [1, 0, 1],
        [0, 0, 0],
        [0, 1, 0],
      ])
    ).toEqual([
      [1, 0, 0],
      [0, 1, 0],
      [1, 1, 1],
      [1, 0, 1],
    ]);
  });
  it("should return [[0]]", () => {
    expect(flipAndInvertImage([[1]])).toEqual([[0]]);
  });
  it("should return [[1]]", () => {
    expect(flipAndInvertImage([[0]])).toEqual([[1]]);
  });
  it("should return [[0,1]]", () => {
    expect(
      flipAndInvertImage([
        [1, 0],
        [0, 1],
      ])
    ).toEqual([
      [1, 0],
      [0, 1],
    ]);
  });
});

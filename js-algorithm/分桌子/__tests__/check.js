const { fun } = require("../02_递归解法1")

describe("分桌坐", () => {
  it("6人 4种分法", () => {
    expect(fun(6, 2)).toBe(4)
  })
  it("10人 12种分法", () => {
    expect(fun(10, 2)).toBe(12)
  })
  it("100人 437420种分法", () => {
    expect(fun(100, 2)).toBe(437420)
  })
})

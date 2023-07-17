/*
给n个人分桌，每桌最少2人，最多10人
注：不看顺序，只看最终分桌情况

求：100人最多有几种分的方式



*/

const MIN = 2
const MAX = 10

function fun(n, x = MIN) {
  if (n < 0 || n < x || x > MAX) {
    return 0
  } else if (n === x) {
    return 1
  } else {
    return fun(n, x + 1) + fun(n - x, x)
  }
}

module.exports = { fun }


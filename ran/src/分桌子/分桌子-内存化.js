// 100 437420

/*
用JS解决下面这个算法问题；群人去餐厅用餐，决定分桌坐，在分桌时要避免出现 1 张桌子只有 1个人的情况
如果只考虑基于人数的分法，不考虑谁坐在哪一桌，那么以 6 人为例，其有以下 4 种分法此时，
2人+2人+2人
2人+4人
3人+3人
6人
如果 1张桌子最多能坐 10 人，那么当有 100 人需要分桌坐时，有多少种分法?
*/

const MAX = 10;
const MIN = 2;

const cache = {}

function fun(n, num = MIN) {

  if(cache[n] && cache[n][num]) {
    return cache[n][num]
  }

  let result;

  if (n < 0 || num > MAX || n < num) {
    result = 0;
  } else if (n == num) {
    result = 1;
  } else {
    result = fun(n, num + 1) + fun(n - num, num);
  }

  cache[n] = cache[n] || {}
  cache[n][num] = result;

  return result;
}

console.log(fun(1000));

module.exports = {fun}
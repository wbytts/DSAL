/*
动态规划
*/
function check(n, min) {
  const dp = new Array(n + 1).fill(0);
  dp[0] = 1;

  for (let i = min; i <= Math.min(n, 10); i++) {
    for (let j = i; j <= n; j++) {
      dp[j] += dp[j - i];
    }
  }

  return dp[n];
}
console.log(check(100, 2));

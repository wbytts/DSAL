function check(n) {
  // 第0行
  let arr = [1];

  for (let i = 1; i <= n; i++) {
    let next = [1];
    for (let j = 1; j < i; j++) {
      // 上一行的两个数字相加
      if (arr[j - 1] && arr[j]) {
        next[j] = arr[j - 1] + arr[j];
      } else {
        next[j] = 1;
      }
    }
    arr = next;
    console.log(arr.join(' '));
  }
}
check(8);

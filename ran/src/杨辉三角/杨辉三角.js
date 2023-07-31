const cache = {};

// 第i行第j个数字
function yang(i, j) {
  const key = `${i}-${j}`;
  if (key in cache) {
    return cache[key];
  }

  let result;
  // j === 0 左侧
  // i === j 右侧
  // i === 0 第0层
  if (j === 0 || j === i || i === 0) {
    result = 1;
  } else {
    // 上一层顶上两个相加
    result = yang(i - 1, j - 1) + yang(i - 1, j);
  }

  cache[key] = result;
  return result;
}

// 1 5 10 50 100 500 1000 2000 5000 10000

function print(n) {
  for (let i = 0; i < n; i++) {
    let s = '';
    for (let j = 0; j < n - i; j++) {
      s += ' ';
    }
    for (let j = 0; j <= i; j++) {
      s += yang(i, j) + ' ';
    }
    console.log(s);
  }
}

// print(8);

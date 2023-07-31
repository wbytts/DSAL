function yang(n) {
  // 第0行
  let arr = [1];
  // console.log(arr.join(' '))
  for (let i = 1; i <= n; i++) {
    arr[i] = 1;
    for (let j = i - 1; j > 0; j--) {
      arr[j] = arr[j - 1] + arr[j];
    }
    // console.log(arr.join(' '))
  }

  return arr;
}

// yang(8);
const coinArr = [1, 5, 10, 50, 100, 500, 1000, 2000, 5000, 10000]

function getMinCoin(n) {
  const nums = yang(n);
  let count = 0;
  for(let i=0; i<nums.length; i++) {
    const coins = [...coinArr]
    let coin = coins.pop()
    while(nums[i]) {
      if(nums[i] - coin >= 0) {
        nums[i] -= coin;
        count++;
      } else {
        coin = coins.pop()
      }
    }
  }
  console.log(count)
}

getMinCoin(45)
function permute(nums) {
  let arr = [];
  let used = {};
  let result = [];

  function f(i, max) {
    if (i === max + 1) {
      console.log(arr.map(x => nums[x]));
      result.push(arr.map(x => nums[x]))
      return;
    }
    for (let j = 0; j <= max; j++) {
      if (used[j]) continue;
      arr[i] = j;
      used[j] = true;
      f(i + 1, max);
      used[j] = false;
    }
  }

  f(0, nums.length - 1);
}

permute([1, 2, 3]);

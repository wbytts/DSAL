function check(n) {
  let result = 0;
  for (let rock = 0; rock <= n; rock++) {
    for (let jian = 0; jian <= n - rock; jian++) {
      let paper = n - rock - jian;

      // 2 0 2
      if (rock > jian) {
        if (rock !== paper) {
          result++;
        }
      } else if (rock < jian) {
        if (jian !== paper) {
          result++;
        }
      } else {
        if (paper > rock) {
          result++;
        }
      }
    }
  }

  return result;
}

console.log(check(100));

// 1234 -> ?? -> 4321

for (let i = 1000; i <= 9999; i++) {
  // 取得各个位上的数字
  let [a1, a2, a3, a4] = `${i}`.split('');
  let target = +(a4 + a3 + a2 + a1);
  let ops = ['+', '-', '*', '/', ''];

  if (target < 1000) {
    continue;
  }

  for (let x1 of ops) {
    for (let x2 of ops) {
      for (let x3 of ops) {
        if (x1 === '' && x2 === '' && x3 === '') {
          continue;
        }
        let s = `${a1}${x1}${a2}${x2}${a3}${x3}${a4}`;
        let result = eval(s);
        // console.log(s, '=', result);
        if (target === result) {
          console.log(i, '->', s, '->', result);
        }
      }
    }
  }
}

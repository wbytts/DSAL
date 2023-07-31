// 30个灯亮，8360种

// hh mm ss
// 00:00:00
// 01:
// 11:

const num = [6, 2, 5, 5, 4, 5, 6, 3, 7, 6];

function check(n) {
    let count = 0;
    for (let i = 0; i <= 23; i++) {
        for (let j = 0; j <= 59; j++) {
            for (let k = 0; k <= 59; k++) {
                let h = num[parseInt(i / 10)] + num[i % 10];
                let m = num[parseInt(j / 10)] + num[j % 10];
                let s = num[parseInt(k / 10)] + num[k % 10];
                if (h + m + s === n) {
                    count++;
                }
            }
        }
    }
    return count;
}

console.log(check(30));

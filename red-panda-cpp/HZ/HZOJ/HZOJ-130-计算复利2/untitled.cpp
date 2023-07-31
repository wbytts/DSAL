
/*
输入两个整数m,n表示每月存入的前和存入几个月
m 1 ~ 10000
n 1 ~ 100

输出：输出一个 $ 符号和一个紧邻的浮点数，表示n个月后，账户上的钱

 */

#include <iostream>
#include <iomanip>
#include <vector>
#include <map>
#include <stack>
using namespace std;

int main() {

    cout << fixed << setprecision(2);  // 设置输出精度为2位小数

    int m, n;
    cin >> m >> n;

    const double rate = 0.00417;
    double result = 0;

    for (int i = 0; i < n; i++) {
        result = (result + m) * (1 + rate);
    }

    cout << "$" << result;

    return 0;
}


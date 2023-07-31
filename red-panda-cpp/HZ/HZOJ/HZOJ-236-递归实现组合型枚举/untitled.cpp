/*
从 1 ~ n 这 n 个整数中，随机选取 m 个
每种方案里的数从小到大排列
按字典序输出所有可能的选择方案

f(i, min, max)
i == m 返回

f(i, min, max)
	-> min + f(i+1, min+1, max)
	-> ......

 */

#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <map>
#include <stack>
using namespace std;

int arr[10];

void print_one_result(int n) {
    for (int i = 0; i < n; i++) {
        if (i) cout << " ";
        cout << arr[i];
    }
    cout << endl;
}

void f(int i, int min, int max, int m) {
    if (i == m) {
        print_one_result(m);
        return;
    }
	//  && m - i - 1 <= max - j 是一个优化
    for (int j = min; j <= max && m - i - 1 <= max - j; j++) {
		arr[i] = j;
		f(i+1, j+1, max, m);
    }
	return;
}

int main() {
    int n, m;
    cin >> n >> m;

    f(0, 1, n, m);

    return 0;
}


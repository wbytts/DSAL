
/*
从1~n这n个整数中，随机选取任意多个，每种方案里的数从小到大排列
按字典序输出所有可能的选择方案

输出：每行一组方案，两个数中间用空格分隔
  
f(i, min, max)
min > max 返回
f(i, min, max) 
  -> min    +  f(i+1, j+1, max)
  -> min+1  +  f(i+1, min+2, max)
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
    for (int i = 0; i <= n; i++) {
        if (i) cout << " ";
        cout << arr[i];
    }
    cout << endl;
}

// i：当前枚举的是第几位的值
// min：当前位置最小是几
// max：当前位置最大是几
void f(int i, int min, int max) {
    if (min > max) return;
    else {
        for (int j = min; j <= max; j++) {
            arr[i] = j;
            print_one_result(i);
            f(i + 1, j + 1, max);
        }
    }
}

int main() {

    int n;
    cin >> n;
    f(0, 1, n);

    return 0;
}


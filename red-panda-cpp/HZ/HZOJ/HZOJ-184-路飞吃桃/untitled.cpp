
/*
路飞买了一堆桃子不知道个数，
第一天吃了一半的桃子 ，还不过瘾，又多吃了一个
以后他每天吃剩下的桃子的一半还多一个
到了第n天只剩下一个桃子了，
问：一开始有多少个桃子

输入：一个整数 n (2 <= n <= 30)
输出：一开始桃子的数量
*/

#include <iostream>
using namespace std;

// 能吃n天剩一个的桃子数量，有多少个
int f(int n) {
    if (n == 1) {
        return 1;
    } else {
        return 2 * (f(n - 1) + 1);
    }
}

int main() {
	
	int n;
	cin >> n;
	
	cout << f(n) << endl;

    return 0;
}



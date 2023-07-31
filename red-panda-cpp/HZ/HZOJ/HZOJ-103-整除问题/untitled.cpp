/*
判断一个整数a是否能被另一个整数b整除

输入两个整数 a 和 b (1<=a,b<=500)
输出：能返回YES，否则返回NO
*/

#include <iostream>
using namespace std;

int main() {
	
	int a,b;
	cin >> a >> b;
	
	while(a >= b) {
		a = a - b;
	}
	
	if(a == 0) {
		cout << "YES";
	} else {
		cout << "NO";
	}
	
	return 0;
}

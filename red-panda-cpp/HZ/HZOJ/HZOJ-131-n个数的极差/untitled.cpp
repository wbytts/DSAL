
/*
极差：
	一组数据中，最大值和最小值的差

输入：
	第一行输入一个正整数n (1<=n<=100)
	第二行输入n个正整数 (1 ~ 10000)
  
输出：一个数字，表示这组数据的极差

 */

#include <iostream>
using namespace std;

int main() {

	int n, min=0, max=0;
	int x;
	
	cin >> n;
	for(int i=0; i<n; i++) {
		cin >> x;
		if(i == 0) {
			min = x;
			max = x;
		} else {
			if(x < min) min = x;
			if(x > max) max = x;
		}
	}
	
	cout << max - min << endl;
	
	return 0;
}


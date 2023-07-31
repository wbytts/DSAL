
/*
输入一个正整数 0 ~ 7

输出 n 行字母，第一行n个，第二行n-1个....直到1个
  
 */

#include <iostream>
using namespace std;

int main() {
	
	int n;
	cin >> n;
	
	char c = 'A';
	for(int i=n; i>=1; i--) {
		for(int j=i; j>0; j--) {
			cout << c;
			c++;
		}
		cout << endl;
	}
	
	return 0;
}



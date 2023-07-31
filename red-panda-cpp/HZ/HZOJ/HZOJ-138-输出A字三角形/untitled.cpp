
/*
输入一个正整数n, 并输出一个三角形
三角形有n行
第一行有 2n个字母A
之后每行字母A会减少2个 
 */

#include <iostream>
using namespace std;

int main() {
	
	int n;
	cin >> n;
	
	for(int i=n; i>=1; i--) {
		for(int j=2*i; j>0; j--) {
			cout << "A";
		}
		cout << endl;
	}
	
	return 0;
}


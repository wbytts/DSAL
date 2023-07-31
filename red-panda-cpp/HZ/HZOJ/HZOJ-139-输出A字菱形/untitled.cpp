
/*
输入一个正整数n，并输出一个菱形
菱形有 2n-1 行
第一行有2个字母A
之后的n-1行每行字母A的数量会递增2个
后面的n+1行至2n-1行，每行字母A的数量会减少2个
同时，我们要注意有一定的空格，保证菱形的居中
 */

#include <iostream>
using namespace std;

int main() {
	
	int n;
	cin >> n;
	
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=n-i; j++) {
			cout << " ";
		}
		for(int j=1; j<=2*i; j++) {
			cout << "A";
		}
		cout << endl;
	}
	
	for(int i=1; i<=n-1; i++) {
		for(int j=1; j<=i; j++) {
			cout << " ";
		}
		for(int j=1; j<=2*n-2*i; j++) {
			cout << "A";
		}
		cout << endl;
	}
	
	return 0;
}


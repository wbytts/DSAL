
/*
输入一个正整数n，并输出一个菱形
有 2n-1 行
第一行有一个字母 A
之后的n-1行每行字母会变成下一个，且数量会加2
后面的n+1到2n-1行，会变成上一个字母，且数量减少2
通过一定的空格保持菱形的居中
 */

#include <iostream>
using namespace std;

int main() {
	
	int n;
	cin >> n;
	
	char ch = 'A';
	
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=n-i; j++) {
			cout << " ";
		}
		for(int j=1; j<=2*i - 1; j++) {
			cout << ch;
		}
		cout << endl;
		ch++;
	}
	
	ch--;
	
	for(int i=1; i<=n-1; i++) {
		ch--;
		for(int j=1; j<=i; j++) {
			cout << " ";
		}
		for(int j=1; j<=2*n - 1 -2*i; j++) {
			cout << ch;
		}
		cout << endl;
	}
	
	return 0;
}


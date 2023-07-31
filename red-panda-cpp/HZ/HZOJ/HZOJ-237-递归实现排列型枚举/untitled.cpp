/*
从 1 ~ n 这 n 个整数排成一列并打乱次序
按字典序输出所有可能的选择方案


  
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <map>
#include <stack>
using namespace std;

int a[10];
int v[10];

void print_one_result(int n) {
	for(int i=0; i<n; i++) {
		if(i) cout << " ";
		cout << a[i];
	}	
	cout << endl;
}

void f(int i, int max) {
	if(i == max) {
		print_one_result(max);
		return;
	}
	for(int j = 1; j <= max; j++) {
		if(v[j]) continue;
		a[i] = j;
		v[j] = 1;
		f(i+1, max);
		v[j] = 0;
	}
	return;
}

int main() {
	int n;
	cin >> n;
	
	f(0, n);
	
	return 0;
}


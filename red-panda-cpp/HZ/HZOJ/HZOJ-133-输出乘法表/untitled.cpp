
/*
  输出一个 n*n 的乘法表

输出n行的乘法表，每个等式之间用 \t 分隔
末尾不要有多余的 \t
 */

#include <iostream>
using namespace std;

int main() {
	
	int n;
	cin >> n;
	
	for(int i=1; i<=n; i++) {
		for(int j=i; j<=n; j++) {
			cout << i << "*" << j << "=" << i * j;
			if(j != n) {
				cout << "\t";
			}
		}
		cout << endl;
	}
	
	return 0;
}




/*
输入一个不超过 10000 的整数n，计算它每一位上的数字总和
1 <= n <= 10000
*/

#include <iostream>
using namespace std;

int main() {
	
	int sum = 0;
	
	int n;
	cin >> n;
	
	while(n) {
		sum += n % 10;
		n /= 10;
	}
	cout << sum;
	
	return 0;
}


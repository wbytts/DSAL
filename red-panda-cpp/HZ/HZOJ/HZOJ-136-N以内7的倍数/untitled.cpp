
/*
给定一个正整数n，输出n以内(含n)所有7的倍数
  
输出：每行一个结果
  
 */

#include <iostream>
using namespace std;

int main() {

	int n;
	cin >> n;
	
	int current = 7;
	while(current <= n) {
		cout << current << endl;
		current += 7;
	}
	
	return 0;
}


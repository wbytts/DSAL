
/*
输入一个四位的正整数，判断它的各个位上是否存在偶数
  
如果n的千位、百位、十位、个位中任何一个数为偶数则输出YES，否则输出NO
  
 */

#include <iostream>
using namespace std;

int main() {
	
	int n;
	cin >> n;
	while(n) {
		if(n % 2 == 0) {
			cout << "YES" << endl;
			break;
		}
		n /= 10;
	}
	
	if(n == 0) {
		cout << "NO" << endl;
	}
	
	return 0;
}

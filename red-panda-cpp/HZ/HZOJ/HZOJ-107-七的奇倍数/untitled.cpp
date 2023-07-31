
/*
如果一个数，既是7的倍数，又不能被2整除，那么我们称之为7的奇倍数
  
输入一个正整数n，判断它是否是7的奇倍数
  
输入一个正整数n，(0<= n <= 100)
输出：YES 或者 NO
*/

#include <iostream>
using namespace std;

int main() {
	
	int n;
	cin >> n;
	
	if(n % 7 == 0 && n % 2 != 0) {
		cout << "YES";
	} else {
		cout << "NO";
	}
	
	return 0;
}


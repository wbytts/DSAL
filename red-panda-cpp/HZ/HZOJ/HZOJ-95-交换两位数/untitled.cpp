/*
读入一个两位的个位不为0的正整数，将它的十位数和个位数调换后输出
输入：一个整数n (11 <= n <= 99)
输出：一个整数表示调换后的数
*/

#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	
	cout << n % 10 << n / 10 << endl;
	
	return 0;
}


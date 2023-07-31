/*
输入一个正整数，你需要计算 1+2+3+...+n的值
公式：sum = n*(1+n)/2
  
1 <= n <= 1000000

注：结果可能比较大
*/
#include <iostream>
using namespace std;

int main()
{
	unsigned long long n;
	cin >> n;
	
    unsigned long long result; 
	
	result = n * (1 + n) / 2;

	cout << result << endl;
	
	return 0;
}


/*
假设每个月向银行账户存100美元, 月利率为 0.00417
第一个月之后，账户上的值就变成：100 * (1 + 0.00417) = 100.417
第二个月之后，账户上的值就变成：(100+100.417) * (1+0.00417) = 201.252
第三个月之后，账户上的值就变成：(100+201.252) * (1+0.00417) = 302.507

输入：一个整数n表示初始的钱
输出：一个符号 $ 和一个紧邻的浮点数，表示六个月后账户上的钱
结果保留两位小数
 
 */
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	
	double n;
	cin >> n;
	const double rate = 0.00417;
	double result = 0;
	
	for(int i=0; i<6; i++) {
		result = (result + n) * (1 + rate);
	}
	
	cout << fixed << setprecision(2);  // 设置输出精度为2位小数
	cout << "$" << result;
	
	return 0;
}

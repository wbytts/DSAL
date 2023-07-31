
/*
读入 n 个整数，计算他们的平均值
  
输入：
	第一行输入一个整数n (2~1000)
	第二行为n个整数 (1~10000)
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	
	cout << fixed << setprecision(2);  // 设置输出精度为2位小数
	
	int n;
	cin >> n;
	
	double sum = 0;
	for(int i=0; i<n; i++) {
		double x;
		cin >> x;
		sum += x;
	}
	
	cout << sum / n << endl;
	
	
	
	return 0;
}


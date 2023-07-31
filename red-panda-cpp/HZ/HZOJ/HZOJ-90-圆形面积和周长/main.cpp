/*
	输入圆形的半径r，输出圆形的面积和周长
    圆的周长公式：2 * pi * r
    圆的面积公式：pi * r * r
  
  pi的值近似地取 3.14
  
输入：
	一个实数，表示圆的半径 (0.00 < r <= 100.00)
  
输出：
	第一行输出圆的周长
	第二行输出圆的面积
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	double r;
	const double pi = 3.14;
	
	cin >> r;
	
	cout << fixed << setprecision(2);  // 设置输出精度为2位小数
	cout << 2 * pi * r << endl;
	cout << pi * r * r << endl;
	return 0;
}


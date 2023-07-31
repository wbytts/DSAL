/*
有一个大圆半径为 r1, 在它的中间抠掉一个半径为 r2 的小圆
求剩下的圆环的面积

pi 默认取 3.14

输入：两个圆环的半径 r1 和 r2 (0 <= r2 < r1 < 1000)
输出：圆环的面积(结果保留两位小数)

 */

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	double r1, r2;
	const double PI = 3.14;
	cin >> r1 >> r2;
	cout << fixed << setprecision(2);  // 设置输出精度为2位小数
	cout << PI * r1 * r1 - PI * r2 * r2 << endl;
	return 0;
}


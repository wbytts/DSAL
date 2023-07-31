/*
给定一个三角形或长方形的底和高，求它的面积

输入：
	第一行输入一个字符，只可能是 r 或者 t，r表示长方形，t表示三角形
	第二行为两个实数，m和n，分别对应三角形的底和高、长方形的长和宽
	0.0 <= m,n <= 100.0
  
输出：
	输出一行表示图形的面积（保留两位小数）
 
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	cout << fixed << setprecision(2);  // 设置输出精度为2位小数

	char c;
	double m, n;
	cin >> c;
	cin >> m >> n;
	
	if(c == 't') {
		cout << m * n / 2;
	} else {
		cout << m * n;
	}
	
	return 0;
}

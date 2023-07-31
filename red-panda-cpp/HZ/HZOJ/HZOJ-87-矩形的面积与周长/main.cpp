/*
对于一个给定长和宽的矩形，输出它的周长和面积
输入：
    一行两个小数a和b表示矩形的长和宽 (0.0 <= a, b <= 100.0)
  
输出：
	第一行是矩形的周长
    第二行是矩形的面积
    结果保留两位小数
  
注意：
	浮点数在计算过程中，存在精度损失，不同的运算顺序可能会得到不同的值，请按照题目给出的运算顺序计算
	系统中默认的浮点数为double类型，所以不要使用float类型

 */

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	double a, b;
	cin >> a >> b;
	cout << fixed << setprecision(2);  // 设置精度为2位小数
	
	cout << 2 * (a + b) << endl;
	cout << a * b << endl;
	
	
	return 0;
}


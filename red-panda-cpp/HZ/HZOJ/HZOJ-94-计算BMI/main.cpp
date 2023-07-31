/*
读入两个实数表示体重h和身高w，输出 BMI 的值
公式：BMI = w / (h * h)
输入：两个实数，分别为 w 和 h (0.0 < w <= 300.0, 0.0 <h <= 3.0)
输出：
  一个数表示BMI的值（结果保留两位小数）
  
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	double w, h;
	
	cin >> w >> h;
	
	cout << fixed << setprecision(2);  // 设置输出精度为2位小数
	cout << w / (h*h) << endl;
	return 0;
}


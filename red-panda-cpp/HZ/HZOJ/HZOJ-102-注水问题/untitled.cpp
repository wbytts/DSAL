/*
已知
注水管A单独注满一池水需要a小时，
注水管B单独注满一池水需要b小时，
排水管C单独排完一池水需要c小时，
初始时水池中没有水，同时打开注水管A和B，
t小时后，再打开排水管C，
问水池注满一共需要多少小时

保证打开水管C时水池还没注满，且保证水池最终可以注满

输入：四个整数 a, b, c, t (1~100)
输出：一个浮点数，表示水池注满一共需要多少小时（包括一开始的t小时）

结果保留两位小数

*/
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	double a, b, c, t;
	cin >> a >> b >> c >> t;
	
	cout << fixed << setprecision(2);  // 设置输出精度为2位小数
	
	// 假设水池的容量是1
	double va = 1 / a;
	double vb = 1 / b;
	double vc = 1 / c;
	
	double t2 = (1 - (va + vb) * t) / (va + vb - vc);
	cout << t + t2 << endl;
	
	return 0;
}

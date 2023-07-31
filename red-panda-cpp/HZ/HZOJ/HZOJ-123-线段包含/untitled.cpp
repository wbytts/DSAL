/*
给定数轴上的两条线段，判断两条线段是否存在完全覆盖关系

输入：
	输入第一行两个数 a, b 表示第一条线段的两个端点
	输入第二行两个数 c, d 表示第二条线段的两个端点

	a,b,c,d 的范围 0 ~ 100000

输出：
	如果存在完全覆盖关系则输出YES，否则输出NO

 */

#include <iostream>
using namespace std;

int main() {

    double a, b, c, d;
    cin >> a >> b >> c >> d;

    if (a < c) {
        if (b >= d) {
            cout << "YES";
        } else {
            cout << "NO";
        }
    } else if (a > c) {
        if (b <= d) {
            cout << "YES";
        } else {
            cout << "NO";
        }
    } else {
		// 因为保证了 a < b 和 c < d 
		// 所以 a == c 的时候，肯定包含
		cout << "YES";
    }

    return 0;
}

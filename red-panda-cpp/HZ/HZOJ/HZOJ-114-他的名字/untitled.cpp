/*
输入一个字母 x，输出字母对应的名字

输入：一个小写字母 x

输出：输出字母对应的名字
	h 对应 He
	l 对应 Li
	c 对应 Cao
	d 对应 Duan
	w 对应 Wang
	不属于上述列表中的字母则输出 Not Here

*/

#include <iostream>
using namespace std;

int main() {

    char x;
    cin >> x;

    switch (x) {
        case 'h':
            cout << "He" << endl;
            break;
        case 'l':
            cout << "Li" << endl;
            break;
        case 'c':
            cout << "Cao" << endl;
            break;
        case 'd':
            cout << "Duan" << endl;
            break;
        case 'w':
            cout << "Wang" << endl;
            break;
        default:
            cout << "Not Here" << endl;
    }

    return 0;
}


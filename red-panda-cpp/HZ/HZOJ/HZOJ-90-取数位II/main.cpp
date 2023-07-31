/*
	给定一个三位数的整数，分别输出它的百位数、十位数和个位数。
	输入：一个正整数a (100<=a<=999)
    输出：
        第一行为a的百位数
	    第二行为a的十位数
	    第三行为a的个位数
*/

#include <iostream>
using namespace std;

int main()
{
	int a;
	cin >> a;
	cout << a / 100 << endl;
	cout << a / 10 % 10 << endl;
	cout << a % 10 << endl;
	return 0;
}


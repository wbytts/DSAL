
/*
给出一个年份y和月份m，求y年m月有多少天
  
1000 <= y <= 3000
1 <= m <= 12
*/

#include <iostream>
using namespace std;

int getDaysInMonth(int year, int month) {
	int days = 31;  // 默认有31天
	
	if (month == 2) {  // 2月特殊处理
		if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) 
			days = 29;  // 闰年2月29天
		else
			days = 28;  // 平年2月28天
	} else if (month == 4 || month == 6 || month == 9 || month == 11) {
		days = 30;  // 4,6,9,11月有30天
	}
	
	return days;
}


int main() {
	
	int y, m;
	cin >> y >> m;
	
	cout << getDaysInMonth(y, m) << endl;	
	
	return 0;
}


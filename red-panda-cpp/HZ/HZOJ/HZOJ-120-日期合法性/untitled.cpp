
/*
输入一个日期，判断这个日期是否存在

1,3,5,7,8,10,12 有31天
4,6,9,11 有30天
  
非闰年2月有28天
闰年2月有29天
  
非整百年，能被4整除的为闰年
整百年，能被400整除的是闰年

输入：三个数，y,m,d 分别表示年月日 (-10 <= y,m,d <= 3000)

输出：
	如果日期存在，输入YES，否则输出NO
*/

#include <iostream>
using namespace std;

// 判断是否是闰年
bool checkRun(int year) {
	if(year % 100 == 0) {
		return year % 400 == 0;
	} else {
		return year % 4 == 0;
	}
}


bool checkDay(int year, int month, int day) {
	int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	if(month < 1 && month > 12) return false;
	else {
		if(month != 2) {
			return day >= 1 && day <= days[month - 1];
		} else {
			if(checkRun(year)) {
				return day >= 1 && day <= 29;
			} else {
				return day >= 1 && day <= 28;
			}
		}
	}
}

int main() {
	
	int y, m, d;
	cin >> y >> m >> d;
	
	cout << (checkDay(y, m, d) ? "YES" : "NO") << endl;
	
	
	return 0;
}



/*
已知 1900年是鼠年，输入一个年份，输出其对应的生肖

鼠 rat
牛 ox
虎 tiger
兔 rabbit
龙 dragon
蛇 snake
马 horse
羊 sheep
猴 monkey
鸡 rooster
狗 dog
猪 pig

 */

#include <iostream>
using namespace std;

string getChineseZodiac(int year) {
	string zodiacs[] = {"rat", "ox", "tiger", "rabbit", "dragon", "snake", "horse", "sheep", "monkey", "rooster", "dog", "pig"};
	
	if(year >= 1900) {
		return zodiacs[(year - 1900) % 12];
	} else {
		return zodiacs[12 - (1900 - year) % 12];
	}
	
}


int main() {
	
	int year;
	cin >> year;
	
	cout << getChineseZodiac(year) << endl;
	
	return 0;
}



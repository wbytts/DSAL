/*
输入一个字符串，统计其中字符 A的数量并输出
字符串不带空格，长度不超过100
 */

#include <iostream>
using namespace std;

int main() {
	
	char s[100];
	scanf("%s", s);
	
	int count = 0;
	int i=0;
	while(s[i]) {
		if(s[i] == 'A') {
			count++;
		}
		i++;
	}
	cout << count;
	
	return 0;
}

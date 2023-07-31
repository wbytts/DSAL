/*
输入一个字符串，然后把这个字符串反转输出，不包含空格
100% 的数据保证 字符串长度小于 50
 */

#include <iostream>
using namespace std;


int main() {
	
	char s[50];
	scanf("%s", s);
	
	int i=0;
	while(s[i]) i++;
	i--;
	while(i>=0) cout << s[i--];
	
	return 0;
}



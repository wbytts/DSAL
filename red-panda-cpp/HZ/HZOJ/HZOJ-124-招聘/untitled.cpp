/*
某厂进行招聘，收到了很多简历，每一份简历包含以下元素
1. 学历 0表示本科毕业，1表示硕士毕业，2表示博士毕业
2. 毕业院校的排名 用 1~1000 的整数表示，数字越小越好
3. 年龄大小：10 ~ 80
4. 工作年龄：0 ~ 30
  
由于简历太多，我们要筛掉一些
	条件为：
		1. 学校排名在前50（含），或学历在硕士及以上的
		2. 年龄小于等于25，或工作年份在5年及以上的

输入：一行四个整数，分别表示 学历，院校排名，年龄，工作年份
输出：是否符合免试条件，符合 ok，否则 pass
 */

#include <iostream>
using namespace std;

int main() {
	
	int level, top, age, workAge;
	cin >> top >> level >> age >> workAge;
	
	if(level <= 50 || top >= 1) {
		if(age <= 25 || workAge >= 5) {
			cout << "ok" << endl;
		} else {
			cout << "pass" << endl;
		}
	} else {
		cout << "pass" << endl;
	}
	
	return 0;
}

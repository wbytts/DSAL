/*
公司举办年会，为了活跃气氛，设置了摇奖环节。参加聚会的每位员工都有一张带有号码的抽奖券
现在，主持人一次公布n个不同的获奖号码，小谢看着自己抽奖券上的号码 num 无比紧张
请编写一个程序，如果小谢获奖了，请输出他中奖的是第几个号码，如果没有中奖，请输出0
  
输入
	第一行一个正整数n表示有n个获奖号码 2<n<=100
	接下来n行包含n个正整数，每行一个数，表示依次公布的n个获奖号码
	最后一行一个正整数num，表示小谢抽奖券上的号码
 */

#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <map>
#include <stack>
using namespace std;

int main() {
	
	vector<int> nums;
	int n;
	cin >> n;
	
	for(int i=0; i<n; i++) {
		int x;
		cin >> x;
		nums.push_back(x);
	}
	
	int num;
	cin >> num;
	
	bool flag = false;
	
	for(int i=0; i<n; i++) {
		if(nums[i] == num) {
			cout << i + 1;
			flag = true;
			break;
		}
	}
	
	if(!flag) {
		cout << 0;
	}
	
	return 0;
}

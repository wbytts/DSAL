#include <iostream>
#include <map>
#include <vector>

/*
	有一个小球掉落在一串连续的弹簧板上，
	小球落到某一个弹簧板后，会被弹到某一个地点，
	直到小球被弹到弹簧板以外的地方
  
	假设有n个连续的弹簧板，每个弹簧板占一个单位距离
	a[i] 表示第i个弹簧板会把小球弹向 a[i] 个距离
	比如位置1的弹簧能让小球前进2个距离到达位置3
	如果小球落到某个弹簧板后，经过一系列弹跳会被弹出弹簧板，那么小球就能从这个弹簧板弹出来
  
	现在小球掉到了1号弹簧板上面，那么这个小球会被弹起多少次，才会弹出弹簧板
	1号弹簧板也算一次
  
	输入：
	    第一行输入一个n代表一共有n个弹簧板 (1<=n<=100000)
	    第二行输入n个数字，中间用空格分开。
		    第i个数字 a[i] (0<a[i]<=30) 代表第i个弹簧板可以让小球移动的距离
  
    输出：
	    输出一个整数，表示小球被弹起的次数
  
*/

using namespace std;

int f(int i, vector<int> &arr, int n) {
	if(i >= n) return 0;
	return f(i + arr[i], arr, n) + 1;
}

int main() {
	int n;
	vector<int> arr;
	
	cin >> n;
	for(int i = 0, a; i < n; i++) {
		cin >> a;
		arr.push_back(a);
	}
	
	cout << f(0, arr, n) << endl;
	
	return 0;
}



/*
质数：除了1和本身，没有其他的因数
回文数：正着看和反着看完全一样的数
给定两个五位正整数 a,b，找出这两个数之间(含这两个)所有既是质数又是回文数的数

 a,b范围：10000 ~ 99999
 */

#include <iostream>
#include <iomanip>
#include <vector>
#include <map>
#include <stack>
#include <cmath>
using namespace std;

//bool isPrime(int n) {
//	for(int i=2; i*i<=n; i++) {
//		if(n % i == 0) {
//			return false;
//		}
//	}
//	return true;
//}
bool isPrime(int n) {
	if(n < 2) {
		return false;
	}
	if(n == 2) {
		return true;
	}
	if(n % 2 == 0) {
		return false;
	}
	for(int i=3; i*i<=n; i+=2) {
		if(n % i == 0) {
			return false;
		}
	}
	return true;
}


bool isHui(int x) {
	int a = x / 10000;
	int b = x % 10000 / 1000;
//	int c = x % 1000 / 100;
	int d = x % 100 / 10;
	int e = x % 10;
	return a == e && b == d;
}

int main() {
	
	int a,b;
	cin >> a >> b;
	
	bool isFirst = true;
	
	for(int i=a; i<=b; i++) {
		
		if(isPrime(i) && isHui(i)) {
			if(isFirst) {
				isFirst = false;
			} else {
				cout << " ";
			}
			cout << i;
		}
	}
	
	return 0;
}


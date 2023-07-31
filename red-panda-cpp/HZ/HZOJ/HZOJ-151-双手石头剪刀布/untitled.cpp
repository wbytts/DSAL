/*
小明和李华自创了一个双手石头、剪刀、布的游戏
他们背对背分别用左手和右手隔出一个石头、剪刀、布的手势（双手可以出一样的）
然后根据下面的规则判断输赢：
  
普通石头剪刀布规则：
	如果一方出石头，一方出剪刀，则石头获胜
	如果一方出石头，一方出布，则布获胜
	如果一方出剪刀，一方出布，则剪刀获胜
	如果两方出的一行，则平局

双手石头剪刀布规则：
	如果小明的左手赢了李华的左手：
		如果小明的左手赢了李华的右手或平局，则小明获胜
		如果小明的左手输给了李华的右手
			如果小明的右手赢了李华的右手，则小明获胜
			如果小明的右手输给了李华的右手或平局，则李华获胜
	如果小明的左手与李华的左手平局
		如果小明的右手赢了李华的右手，则小明获胜
		如果小明的右手输给了李华的右手，则李华获胜
		如果小明的右手与李华的右手平局，则平局
	如果小明的左手输给了李华的左手
		如果小明的右手输给了李华的右手或平局，则李华获胜
		如果小明的右手赢了李华的左手
			如果小明的右手赢了李华的右手或平局，则小明获胜
			如果小明的右手输给了李华的右手，则李华获胜


输入：Y剪刀，O石头，H布
	第一行：小明的左手和右手
	第二行：李华的左手和右手

  
  输出为一行
  ，如果小明赢了，输出 MING
  ，如果李华赢了，输出 LIHUA
  ，如果平局输出 TIE

 */

#include <iostream>
using namespace std;

int check(char a, char b) {
	if(a == 'O' && b == 'Y') return 1;
	if(a == 'O' && b == 'O') return 0;
	if(a == 'O' && b == 'H') return -1;
	if(a == 'Y' && b == 'Y') return 0;
	if(a == 'Y' && b == 'O') return -1;
	if(a == 'Y' && b == 'H') return 1;
	if(a == 'H' && b == 'Y') return -1;
	if(a == 'H' && b == 'O') return 1;
	if(a == 'H' && b == 'H') return 0;
}

int main() {
	
	char L1, L2, R1, R2;
	cin >> L1 >> R1 >> L2 >> R2;
	
	int LL = check(L1, L2);
	if(LL > 0) {
		int LR = check(L1, R2);
		if(LR >= 0) {
			cout << "MING" << endl;
		} else {
			int RR = check(R1, R2);
			if(RR > 0) cout << "MING" << endl;
			else cout << "LIHUA" << endl;
		}
	} else if(LL < 0) {
		int RL = check(R1, L2);
		if(RL <= 0) {
			cout << "LIHUA" << endl;
		} else {
			int RR = check(R1, R2);
			if(RR >= 0) cout << "MING" << endl;
			else cout << "LIHUA" << endl;
		}
	} else {
		int RR = check(R1, R2);
		if(RR > 0) cout << "MING" << endl;
		else if(RR < 0) cout << "LIHUA" << endl;
		else cout << "TIE" << endl;
	}
	
	return 0;
}


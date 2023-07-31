
/*
输入一个字符串，将其中所有的大写和小写字母改成该字母的下一个字母
z的下一个字母为a

输入：输入一个不包含空格的字符串，字符串长度小于50
  
 */

#include <iostream>
#include <string>

using namespace std;

string getNextLetterString(string input) {
	for(int i = 0; i < (int)input.size(); i++) {
		if(input[i] >= 'a' && input[i] < 'z') {
			input[i] = input[i] + 1;
		} else if (input[i] == 'z') {
			input[i] = 'a';
		} else if (input[i] >= 'A' && input[i] < 'Z') {
			input[i] = input[i] + 1;
		} else if (input[i] == 'Z') {
			input[i] = 'A';
		}
	}
	return input;
}

int main() {
	string input;
	cin >> input;
	string result = getNextLetterString(input);
	cout << result << endl;
	return 0;
}

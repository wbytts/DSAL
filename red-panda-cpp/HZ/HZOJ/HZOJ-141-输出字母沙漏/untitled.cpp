
/*
输入一个正整数n，并输出一个沙漏形
有 2n+1 行
第一行有 2n+1 个字母，从A开始 ABCD.....DCBA
之后n行每行减少2个
再之后n行每行增加2个

 */

#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    char ch = 'A';

    for (int i = 1; i <= n + 1; i++) {
        char c = ch;
        for (int j = 1; j <= i - 1; j++) {
            cout << " ";
        }
        for (int j = -(n - i + 1); j <= n - i + 1; j++) {
            cout << c;
            if (j < 0) c++;
            else c --;
        }
        cout << endl;
        ch++;
    }

    ch--;

    // n+2 n-(i-n)+1

    for (int i = n + 2; i <= 2 * n + 1; i++) {
        char c = --ch;
        for (int j = 1; j <= 2 * n - i + 1; j++) {
            cout << " ";
        }

        // n-i+1   n+1   k
        // 2n+2 - n + i - 1
        // n + i + 1

        for (int j = -(i - n - 1); j <= i - n - 1; j++) {
            cout << c;
            if (j < 0) c++;
            else c --;
        }
        cout << endl;
    }

    return 0;
}


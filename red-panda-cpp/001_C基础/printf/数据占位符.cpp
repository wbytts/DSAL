#include<iostream>
using namespace std;

int main() 
{
	printf("%d\n", 1231);
	
	// %f 默认输出六位小数
	printf("%f\n", 3.14);
	// 指定保留三位小数
	printf("%.3lf\n", 3.14);
	// 指定总体显示的宽度：域宽
	printf("[%10.3f]\n", 3.14);
	
	
	
	return 0;
}


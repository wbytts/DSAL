#include <stdio.h>

int main() 
{
	// 定义一个整数类型 int
	// int 是有范围的，这个返回在不同的环境下可能不同（硬件、系统、编译器）
	// 大多情况下，int占4个字节
	int a = 2;

	printf("%d\n", a);
	
	// sizeof 可以查看类型的大小，单位是字节
	printf("%llud\n", sizeof(int));
	
	
	
	return 0;
}

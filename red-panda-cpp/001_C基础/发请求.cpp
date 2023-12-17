#include <stdio.h>
#include <stdlib.h>

int main()
{
	system("curl  -H \"Content-Type: application/json\" -X POST -d '{\"account\":\"admin\",\"password\":\"1231\"}' 'http://47.102.134.16:8080/login'");
	return 0;
}

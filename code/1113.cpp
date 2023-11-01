#include <stdio.h>
#define FP (long long (*)())

//猜测一下，这是打字题吗;

long long func() {
	static int a = 10;
	a += a * 10;
	printf("%d", a);
	return (long long)&func;
}

int main() {
	//从里向外第四个FP没有调用括号是什么意思啊 (>_<)
	(FP(FP(FP(FP(FP(FP(FP func())())())()))())())();
	printf("\n");
	return 0;
}
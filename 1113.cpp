#include <stdio.h>
#define FP (long long (*)())

//�²�һ�£����Ǵ�������;

long long func() {
	static int a = 10;
	a += a * 10;
	printf("%d", a);
	return (long long)&func;
}

int main() {
	//����������ĸ�FPû�е���������ʲô��˼�� (>_<)
	(FP(FP(FP(FP(FP(FP(FP func())())())()))())())();
	printf("\n");
	return 0;
}
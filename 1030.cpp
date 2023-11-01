#include <stdio.h>

//关于汉诺塔移动次数问题不用关心移动方法这件事（

int main() {
	int n;
	scanf("%d", &n);

	printf("%d", (1 << n) - 1);

	return 0;
}
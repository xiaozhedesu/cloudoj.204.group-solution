#include <stdio.h>

int fabonacci(int num) {
	if (num == 0) {
		return 0;
	} else if (num <= 2) {
		return 1;
	} else {
		return fabonacci(num - 1) + fabonacci(num - 2);
	}
}

int main() {
	//输入一个数
	int num;
	scanf("%d", &num);
	int fab = fabonacci(num);

	printf("%d", fab);
	return 0;
}

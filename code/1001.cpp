#include <stdio.h>

void numberTriangle(int line) {
	for (int i = 1; i <= line; i++) {
		//对齐
		for (int j = line - i; j > 0; j--) {
			printf(" ");
		}

		//打印每行第一个数
		printf("%d", i);

		//打印剩下的
		for	(int printNum = i - 1; printNum > 0; printNum--) {
			printf(" %d", i);
		}
		if (i != line) {
			printf(" \n");
		}
	}
}

int main() {
	//输入一个数
	int line;
	scanf("%d", &line);

	//打印数字金字塔
	numberTriangle(line);

	return 0;
}
#include <stdio.h>

//杨辉三角

int arrangement(int up, int down) {
	if (up == 0) {
		return 1;
	}
	//计算排列数
	int result = 1;
	for	(int i = down; i > down - up; i--) {
		result *= i;
	}
	return result;
}

int combination(int up, int down) {
	//计算组合数
	return arrangement(up, down) / arrangement(up, up);
}

int printYangHuiTriangle(int n) {
	//计算并打印杨辉三角
	for (int linage = 0; linage < n; linage++) {
		for ( int j = n; j > linage + 1; j--) {
			printf(" ");
		}
		for (int i = 0; i <= linage; i++) {
			printf("%d", combination(i, linage));
			if (i != linage) {
				printf(" ");
			}
			//printf("combination(%d,%d) = %d\n", i, linage, combination(i, linage));
		}
		if (linage != n - 1) {
			printf("\n");
		}
	}
}

int main() {
	printYangHuiTriangle(5);

	return 0;
}

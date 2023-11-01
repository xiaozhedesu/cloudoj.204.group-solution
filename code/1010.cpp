#include <stdio.h>

// 1.找出完全数
// 2.逐个照格式打印完全数式子
void printArray(int array[], int length) {
	putchar('[');
	for (int i = 0; i < length; i++) {
		if (i + 1 == length) {
			printf("%d]\n", array[i]);
		} else {
			printf("%d,", array[i]);
		}
	}
}

int isPerfectNumber(int num) {
	int sum = 0;
	for (int i = 1; i < num; i++) {
		if (num % i == 0) {
			sum += i;
		}
	}

	return sum == num;
}

int main() {
	int m, n;
	scanf("%d %d", &m, &n);
	int perfectNumbers[100] = {0};
	int pnLength = 0;

	// 先找出范围内所有完数
	for (int i = m; i <= n; i++) {
		if (isPerfectNumber(i)) {
			perfectNumbers[pnLength++] = i;
		}
	}

	// 准备打印
	for (int turn = 0; turn < pnLength; turn++) {
		int num = perfectNumbers[turn];
		// 找出这个数所有因数
		int factors[num];
		int fLength = 0;
		for (int i = 1; i < num; i++) {
			if (num % i == 0) {
				factors[fLength++] = i;
			}
		}
		// 打印
		printf("%d = ", num);
		for (int i = 0; i < fLength; i++) {
			if (i == fLength - 1) {
				printf("%d", factors[i]);
			} else {
				printf("%d + ", factors[i]);
			}
		}
		if (turn + 1 != pnLength) {
			printf("\n");
		}
	}

	return 0;
}

#include <stdio.h>

void printPalindromic(int left, int right) {
	for (int i = left; i <= right; i++) {
		int num1 = i, num2 = 0;
		while (num1 != 0) {
			num2 = num2 * 10 + num1 % 10;
			num1 = num1 / 10;
		}
		if (num2 == i) {
			printf("%d\n", i);
		}
	}
}

int main() {
	int m, n;
	scanf("%d %d", &m, &n);

	printPalindromic(m, n);

	return 0;
}

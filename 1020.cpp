#include <stdio.h>

int isUglyNumber(int num) {
	while (num % 2 == 0) {
		num /= 2;
	}
	while (num % 3 == 0) {
		num /= 3;
	}
	while (num % 5 == 0) {
		num /= 5;
	}
	return (num == 1) ? 1 : 0;
}

int main() {
	for (int i = 1; i <= 100; i++) {
		if (isUglyNumber(i)) {
			printf("%d\n", i);
		}
	}

	return 0;
}

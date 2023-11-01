#include <stdio.h>

int summation(int left, int right) {
	int sum = 0;
	for (int i = left; i <= right; i++) {
		sum += i;
	}
	return sum;
}

int main() {
	int l, r;
	scanf("%d %d", &l, &r);

	int sum = summation(l, r);
	printf("%d", sum);

	return 0;
}

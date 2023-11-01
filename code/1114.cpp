#include <stdio.h>

int numberAbout2(int number) {
	//范围在两位数到四位数
	//先分为三种情况把数字分离为单个数字，然后判断是否为2
	int count = 0;
	if (number > 10 && number < 100) {
		int a, b;
		a = number % 10;
		b = (number / 10) % 10;

		count += (a == 2) ? 1 : 0;
		count += (b == 2) ? 1 : 0;
		return count;
	}
	if (number < 1000) {
		int a, b, c;
		a = number % 10;
		b = (number / 10) % 10;
		c = (number / 100) % 10 % 10;

		count += (a == 2) ? 1 : 0;
		count += (b == 2) ? 1 : 0;
		count += (c == 2) ? 1 : 0;
		return count;
	}
	if (number < 10000) {
		int a, b, c, d;
		a = number % 10;
		b = (number / 10) % 10;
		c = (number / 100) % 10 % 10;
		d = (number / 1000) % 10 % 10 % 10;

		count += (a == 2) ? 1 : 0;
		count += (b == 2) ? 1 : 0;
		count += (c == 2) ? 1 : 0;
		count += (d == 2) ? 1 : 0;
		return count;
	}

}

int main() {
	int sum = 0;
	for (int i = 20; i <= 6666; i++) {
		sum += numberAbout2(i);
	}
	printf("%d", sum);
	return 0;
}

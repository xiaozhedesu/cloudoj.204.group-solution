#include <stdio.h>

int main() {
	for (int num = 100; num < 1000; num ++) {
		//���Ƚ������λ����ֳ���������Ȼ���ж����Ƿ�Ϊˮ�ɻ���
		int a, b, c;
		a = num % 10;
		b = (num / 10) % 10;
		c = (num / 100) % 10;

		if (a * a * a + b * b * b + c * c * c == num) {
			printf("%d\n", num);
		}
	}
	return 0;
}

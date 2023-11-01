#include <stdio.h>

int howMuch2(int num) {
	//�ٶ������num��Χ��[1,9999]
	//��4�����ȥ����������ж��ٸ�����2�������
	int count = 0;
	if (num > 0 && num < 10) {
		return (num == 2) ? 1 : 0;
	} else if (num < 100) {
		int a, b;
		a = num % 10;
		b = (num / 10) % 10;

		count += (a == 2) ? 1 : 0;
		count += (b == 2) ? 1 : 0;

		return count;
	} else if (num < 1000) {
		int a, b, c;
		a = num % 10;
		b = (num / 10) % 10;
		c = (num / 100) % 10;

		count += (a == 2) ? 1 : 0;
		count += (b == 2) ? 1 : 0;
		count += (c == 2) ? 1 : 0;

		return count;
	} else if (num < 10000) {
		int a, b, c, d;
		a = num % 10;
		b = (num / 10) % 10;
		c = (num / 100) % 10;
		d = (num / 1000) % 10;

		count += (a == 2) ? 1 : 0;
		count += (b == 2) ? 1 : 0;
		count += (c == 2) ? 1 : 0;
		count += (d == 2) ? 1 : 0;

		return count;
	} else {
		printf("������������Χ");
		return 0;
	}
}

int main() {
	int num;
	scanf("%d", &num);

	int result = 0;
	for (int turn = 1; turn <= num; turn++) {
		result += howMuch2(turn);
	}

	printf("%d", result);

	return 0;
}

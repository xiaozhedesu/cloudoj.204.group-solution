#include <stdio.h>

// 1.�ҳ���ȫ��
// 2.����ո�ʽ��ӡ��ȫ��ʽ��
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

	// ���ҳ���Χ����������
	for (int i = m; i <= n; i++) {
		if (isPerfectNumber(i)) {
			perfectNumbers[pnLength++] = i;
		}
	}

	// ׼����ӡ
	for (int turn = 0; turn < pnLength; turn++) {
		int num = perfectNumbers[turn];
		// �ҳ��������������
		int factors[num];
		int fLength = 0;
		for (int i = 1; i < num; i++) {
			if (num % i == 0) {
				factors[fLength++] = i;
			}
		}
		// ��ӡ
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

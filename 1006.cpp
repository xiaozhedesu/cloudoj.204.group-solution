#include <stdio.h>
#include <math.h>

void printNumber(int nums[], int length) {
	for (int index = length - 1; index >= 0; index--) {
		printf("%d", nums[index]);
	}
}

int getDigit(int num) {
	int digit = 0;
	//��λ�������㶨������
	while (num != 0) {
		num /= 2;
		digit++;
	}
	return digit;
}

int main() {
	int num ;
	scanf("%d", &num);

	//����д�ɺ�����ԭ�����뱣��num��ֵ�����¸�ѭ�������������
	int digit =  getDigit(num);
	int result[digit] = {0};
	for (int i = 0; i < digit; i++) {
		result[i] = num % 2;
		num /= 2;
	}

	printNumber(result, sizeof(result) / sizeof(int));
}

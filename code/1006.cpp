#include <stdio.h>
#include <math.h>

void printNumber(int nums[], int length) {
	for (int index = length - 1; index >= 0; index--) {
		printf("%d", nums[index]);
	}
}

int getDigit(int num) {
	int digit = 0;
	//求位数，方便定义数组
	while (num != 0) {
		num /= 2;
		digit++;
	}
	return digit;
}

int main() {
	int num ;
	scanf("%d", &num);

	//这里写成函数的原因是想保留num的值，在下个循环求二进制数用
	int digit =  getDigit(num);
	int result[digit] = {0};
	for (int i = 0; i < digit; i++) {
		result[i] = num % 2;
		num /= 2;
	}

	printNumber(result, sizeof(result) / sizeof(int));
}

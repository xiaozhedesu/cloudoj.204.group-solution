#include <stdio.h>

int getNum(int num) {
	if (num == 1) {
		return 2;
	} else if (num == 2) {
		return 3;
	} else {
		return getNum(num - 2) + getNum(num - 1);
	}
}

long long getSpecialSequenceNumber(int num) {
	if (num == 1) {
		return 2;
	} else if (num == 2) {
		return 6;
	} else {
		printf("getNum(%d) = %d\n", num - 1, getNum(num - 1));
		return (getNum(num - 1) * getNum(num - 1) + getSpecialSequenceNumber(num - 1)) % 100;
	}
}

int main() {
	int num;
	scanf("%d", &num);

	long long result = getSpecialSequenceNumber(num);
	printf("%d", (int)(result % 1000));
	return 0;
}

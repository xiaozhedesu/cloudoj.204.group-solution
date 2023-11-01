#include <stdio.h>
#include <string.h>
#define TRUE 1
#define FALSE 0

int isAllLongLine(int lines[], int index);

int printArray(int array[], int length);

int calcSmallKnifeNumber(int lines[], int index) {
	int knifeNum = 0;
	while (!isAllLongLine(lines, index)) {
		//printArray(lines, 2 * index);
		//如果有不是长线的线，切掉
		//找短线
		for (int i = 0; i < index; i++) {
			if (lines[2 * i] > lines[2 * i + 1]) {
				lines[2 * i] = 0;
				lines[2 * i + 1] = 0;
				knifeNum++;
				break;
			}
		}
	}
	return knifeNum;
}

int main() {
	int n;
	scanf("%d", &n);
	int linesInf[2 * n];
	for (int index = 0; index < n; index++) {
		scanf("%d %d", &linesInf[2 * index], &linesInf[2 * index + 1]);
	}

	int num = calcSmallKnifeNumber(linesInf, n);
	printf("%d", num);

	return 0;
}

int isAllLongLine(int lines[], int index) {
	for (int i = 0; i < index; i++) {
		if (lines[2 * i] > lines[2 * i + 1]) {
			return FALSE;
		}
	}
	return TRUE;
}

int printArray(int array[], int length) {
	putchar('[');
	for (int index = 0; index < length; index++) {
		if (index + 1 == length) {
			printf("%d", array[index]);
		} else {
			printf("%d,", array[index]);
		}
	}
	putchar(']');
	putchar('\n');
}
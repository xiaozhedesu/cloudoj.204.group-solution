#ifndef _TOOL_H
#define _TOOL_H

#include <stdio.h>

void wrap(int *a, int *b) {
	//��������������ֵ
	int temp = *a;
	*a = *b;
	*b = temp;
}

void printArray(int array[], int length) {
	putchar('[');
	for (int index = 0; index < length; index++) {
		if (index + 1 == length) {
			printf("%d", array[index]);
			break;
		}
		printf("%d,", array[index]);
	}
	putchar(']');
	putchar('\n');
}

void scanArray(int array[], int length) {
	for (int index = 0; index < length; index++) {
		scanf("%d", &array[index]);
	}
}

void scanNumber(int num) {
	scanf("%d", &num);
}

int GCD(int num1, int num2) {
	//շת��������������
	if (num1 < num2) {
		wrap(&num1, &num2);
	}

	int dif = num1 % num2;
	if (dif == 0) {
		return num2;
	} else {
		GCD(num2, dif);
	}
}

#endif
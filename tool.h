#ifndef _TOOL_H
#define _TOOL_H

#include <stdio.h>
#define TRUE 1
#define FALSE 0

void wrap(int *a, int *b) {
	//交换两个变量的值
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
	//辗转相除法求最大公因数
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

int isPrime(int num) {
	if(num <= 1) {
		return FALSE;
	}

	for(int i = 2; i <= sqrt(num); i++) {
		if(num % i == 0) {
			return FALSE;
		}
	}
	return TRUE;
}

#endif
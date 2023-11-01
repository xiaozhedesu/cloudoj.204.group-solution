#ifndef _TOOL_H
#define _TOOL_H

#include <stdio.h>

enum CHARTYPE {
	num
} charType;

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

#endif
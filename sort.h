#ifndef _SORT_H
#define _SORT_H

#include <stdio.h>

void bubbleSort(int array[], int length) {
	//从小到大排序
	for (int outer = 0; outer < length; outer++) {
		for (int inner = 0; inner < length - 1 - outer; inner++) {
			if (array[inner] > array[inner + 1]) {
				int temp = array[inner];
				array[inner] = array[inner + 1];
				array[inner + 1] = temp;
			}
		}
	}
}

#endif
#include <stdio.h>

//ƴͼֻ���������ӣ����Ҳ��ܲ��

void reverseSort(int nums[], int length);

void insertLeft (int nums[], int length, int num);

void insertRight (int nums[], int nowNumber, int num);

void printNumber(int nums[], int length);

void printMinNumber(int nums[], int length) {
	int result[length];
	//һ��Ҫ��ʼ��������֮��Ƚ����ݴ�С
	for (int index = 0; index < length; index++) {
		result[index] = 0;
	}

	for (int index = 0; index < length; index++) {
		int num = nums[index];
		if (num <= result[0]) {
			insertLeft(result, length, num);
		} else if (num >= result[index]) {
			insertRight(result, index, num);
		}
	}

	printNumber(result, length);
}

int main() {
	int n ;
	scanf("%d", &n);
	int nums[n];
	for (int index = 0; index < n; index++) {
		scanf("%d", &nums[index]);
	}
	reverseSort(nums, n);	//ΪʲôҪ�������󷢷Ű���̫����

	printMinNumber(nums, n);

	return 0;
}

void insertLeft (int nums[], int length, int num) {
	for (int index = length - 1; index >= 0; index--) {
		nums[index] = nums[index - 1];
	}
	nums[0] = num;
}

void insertRight (int nums[], int nowNumber, int num) {
	nums[nowNumber] = num;
}

void reverseSort(int array[], int length) {
	for (int index = 0; index < length / 2; index++) {
		int temp = array[index];
		array[index] = array[length - 1 - index];
		array[length - 1 - index] = temp;
	}
}

void printNumber(int nums[], int length) {
	for (int index = 0; index < length; index++) {
		printf("%d", nums[index]);
	}
}
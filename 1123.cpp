#include <stdio.h>
#define TRUE 1
#define FALSE 0

int isAll0(int nums[], int length);

int maxNumIndexOfArray(int nums[], int length);

int printNumber(int nums[], int length);

void calcPassword(int nums[], int length, int dif) {
	int result[length];
	//初始化这个数组
	for (int index = 0; index < length ; index++) {
		result[index] = 0;
	}
	int turn = 0;
	while (!isAll0(nums, length)) {
		int index = maxNumIndexOfArray(nums, length);
		nums[index] -= dif;
		if (nums[index] <= 0) {
			result[turn++] = index + 1;
		}
	}

	printNumber(result, length);
}

int main() {
	int n, x;
	scanf("%d %d", &n, &x);
	int nums[n];
	for (int index = 0; index < n; index++) {
		scanf("%d", &nums[index]);
	}

	calcPassword(nums, n, x);

	return 0;
}

int isAll0(int nums[], int length) {
	for (int index = 0; index < length ; index++) {
		if (nums[index] > 0) {
			return FALSE;
		}
	}
	return TRUE;
}

int maxNumIndexOfArray(int nums[], int length) {
	int max = nums[0];
	int maxIndex = 0;
	for (int index = 1; index < length ; index++) {
		if (max < nums[index]) {
			max = nums[index];
			maxIndex = index;
		}
	}
	return maxIndex;
}

int printNumber(int nums[], int length) {
	for (int index = 0; index < length ; index++) {
		printf("%d ", nums[index]);
	}
}

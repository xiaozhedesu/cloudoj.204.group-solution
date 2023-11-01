#include <stdio.h>

int binarySearch(int *nums, int numsLen, int target ) {
	// ¶ş·Ö²éÕÒ
	int *left = nums;
	int *right = nums + numsLen - 1;
	printf("*left = %d,*right = %d", *left, *right);
	return -1;
}

int main() {
	int length = 13;
	int nums[length] = {-1, 0, 3, 4, 6, 10, 13, 14};

	int resultIndex = binarySearch(nums, length, 8);

	return 0;
}

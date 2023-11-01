#include <stdio.h>

void scanArray(int array[], int length);

void printNumber(int nums[], int length);

void findBiggerNumber(int nums1[], int nums2[], int length1, int length2) {
	// length1 > length2
	// nums2 包含于 nums1
	int biggers[length1];
	for (int index = 0; index < length1; index++) {
		int x = nums1[index];
		int sameIndex = -1;
		int bigger = -1;
		//先找到x在nums2数组中相同数字的下标
		for (int i = 0; i < length2; i++) {
			if (nums2[i] == x) {
				sameIndex = i;
				break;
			}
		}
		//对于并不在num2中存在的数，直接返回-1
		if (sameIndex == -1) {
			biggers[index] = bigger;
			continue;
		}
		//再找出第一个比x大的数字。
		for (int i = sameIndex + 1; i < length2; i++) {
			if (nums2[i] > x) {
				bigger = nums2[i];
				break;
			}
		}
		//保存结果
		biggers[index] = bigger;
	}

	printNumber(biggers, length1);
}

int main() {
	int n, m;
	scanf("%d %d", &n, &m);
	int nums1[n], nums2[m];
	scanArray(nums1, n);
	scanArray(nums2, m);

	findBiggerNumber(nums1, nums2, n, m);

	return 0;
}

void scanArray(int array[], int length) {
	for (int index = 0; index < length; index++) {
		scanf("%d", &array[index]);
	}
}

void printNumber(int nums[], int length) {
	for (int index = 0; index < length; index++) {
		if (index + 1 == length) {
			printf("%d", nums[index]);
		} else {
			printf("%d ", nums[index]);
		}
	}
}
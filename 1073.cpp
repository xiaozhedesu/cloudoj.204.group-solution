#include <stdio.h>

void scanArray(int array[], int length);

void printNumber(int nums[], int length);

void findBiggerNumber(int nums1[], int nums2[], int length1, int length2) {
	// length1 > length2
	// nums2 ������ nums1
	int biggers[length1];
	for (int index = 0; index < length1; index++) {
		int x = nums1[index];
		int sameIndex = -1;
		int bigger = -1;
		//���ҵ�x��nums2��������ͬ���ֵ��±�
		for (int i = 0; i < length2; i++) {
			if (nums2[i] == x) {
				sameIndex = i;
				break;
			}
		}
		//���ڲ�����num2�д��ڵ�����ֱ�ӷ���-1
		if (sameIndex == -1) {
			biggers[index] = bigger;
			continue;
		}
		//���ҳ���һ����x������֡�
		for (int i = sameIndex + 1; i < length2; i++) {
			if (nums2[i] > x) {
				bigger = nums2[i];
				break;
			}
		}
		//������
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
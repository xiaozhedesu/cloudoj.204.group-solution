#include <stdio.h>
void printArray(int array[], int length);

int max(int nums[], int length);

int maxSubArraySum(int nums[], int length) {
	printArray(nums, length);

	//�ҳ�������к�
	//�Ȱ�ÿ�����к������
	int sumsLength = 0;
	for (int i = length; i > 0; i--) {
		sumsLength += i;
	}
	int sums[sumsLength] = {0};

	int count = 0;	//���㽫�͸��ƽ�����
	int sum = 0;
	for (int i = 0; i < length; i++) {
		printArray(sums, sumsLength);
		for (int j = 0; j < length; j++) {
			sum = 0;
			for (int k = 0; k < i + 1; k++) {
				sum += nums[j + k];
			}
			sums[count] = sum;
			count++;
		}
	}

	//Ȼ���ҳ����Ͳ�����
	printArray(sums, sumsLength);
	return max(sums, sumsLength);
}

int main() {
//	int k;
//	scanf("%d", &k);
//	int nums[k];
//	for (int i = 0; i < k; i++) {
//		scanf("%d", nums[i]);
//	}

	int k = 6;
	int nums[k] = {-2, 11, -4, 13, -5, -2};

	int result = maxSubArraySum(nums, k);
	printf("%d", result);

	return 0;
}

int max(int nums[], int length) {
	int max = nums[0];
	for (int i = 1; i < length; i++) {
		if (max < nums[i]) {
			max = nums[i];
		}
	}
	printf("max = %d\n", max);
	if (max < 0) {
		return 0;
	}
	return max;
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
	printf("length = %d\n", length);
}


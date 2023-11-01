#include <stdio.h>

int arraySum(int *pNums, int length, int left, int right) {
	//参数分别为：数组、数组长度、要取的范围的左边和右边。
	int sum = 0;
	for (int i = left - 1; i < right; i++) {
		sum += pNums[i];
	}
	return sum;
}

int main() {
	//输入环节
	int n;
	scanf("%d", &n);
	int nums[n];
	for (int i = 0; i < n ; i++) {
		scanf("%d", &nums[i]);
	}
	int left, right;
	scanf("%d %d", &left, &right);

	//调用环节
	int *pNums = &nums[0];
	int sum = arraySum(pNums, n, left, right);
	printf("%d", sum);

	return 0;
}

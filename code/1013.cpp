#include <stdio.h>

int arraySum(int *pNums, int length, int left, int right) {
	//�����ֱ�Ϊ�����顢���鳤�ȡ�Ҫȡ�ķ�Χ����ߺ��ұߡ�
	int sum = 0;
	for (int i = left - 1; i < right; i++) {
		sum += pNums[i];
	}
	return sum;
}

int main() {
	//���뻷��
	int n;
	scanf("%d", &n);
	int nums[n];
	for (int i = 0; i < n ; i++) {
		scanf("%d", &nums[i]);
	}
	int left, right;
	scanf("%d %d", &left, &right);

	//���û���
	int *pNums = &nums[0];
	int sum = arraySum(pNums, n, left, right);
	printf("%d", sum);

	return 0;
}

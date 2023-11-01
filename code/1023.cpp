#include <stdio.h>

//尝试写冒泡算法，从大到小排序
void sqlt(int *nums, int length) {
	for (int cycle = 0; cycle < length; cycle++) {
		for (int index = 0; index < length - 1; index++) {
			if (nums[index] < nums[index + 1]) {
				int temp = nums[index];
				nums[index] = nums[index + 1];
				nums[index + 1] = temp;
			}
		}
	}
}

int main() {
	int v, n;
	scanf("%d %d", &v, &n);

	int items[n];
	for	(int i = 0; i < n; i++) {
		scanf("%d", &items[i]);
	}

	sqlt(items, n);
	int sum = 0, dis;
	for	(int i = 0; i < n; i++) {
		if (sum + items[i] <= v) {
			sum += items[i];
		} else {
			dis = v - sum;
		}
	}
	printf("%d", dis);

	return 0;
}

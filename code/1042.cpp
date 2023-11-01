#include <stdio.h>

void sqlt(int *nums, int length) {
	for (int cycle = 0; cycle < length; cycle++) {
		for (int index = 0; index < length - 1; index++) {
			if (nums[index] == 0) {
				int temp = nums[index];
				nums[index] = nums[index + 1];
				nums[index + 1] = temp;
			}
		}
	}
}

int main() {
	int n;
	scanf("%d", &n);
	int nums[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", &nums[i]);
	}

	sqlt(nums, n);
	for (int i = 0; i < n; i++) {
		printf("%d ", nums[i]);
	}
	return 0;
}

#include <stdio.h>

int getMass(int nums[], int length) {
	for	(int i = 0 ; i < length; i++) {
		int num = nums[i];
		int count = 0;
		for	(int j = 0 ; j < length; j++) {
			if (num == nums[i]) {
				count++;
			}
		}
		if (count > length / 2) {
			return num;
		}
	}
	return 0;
}

int main() {
	//ÊäÈë»·½Ú
	int n;
	scanf("%d", &n);
	int nums[n];
	for (int i = 0; i < n ; i++) {
		scanf("%d ", &nums[i]);
	}

	int mass = getMass(nums, n);
	printf("%d", mass);
	return 0;
}

#include <stdio.h>
#define TRUE 1
#define FALSE 0

int getNum(int nums[], int length) {
	int kinds[length];
	int kindsLength = 0;

	for (int index = 0; index < length; index++) {
		int boo = TRUE;
		for (int i = 0; i < kindsLength; i++) {
			if (nums[index] == kinds[i]) {
				boo = FALSE;
				break;
			}
		}
		if (TRUE == boo) {
			kinds[kindsLength++] = nums[index];
		}
	}
	return kindsLength;
}

int main() {
	int n;
	scanf("%d", &n);
	int m[n];
	for (int index = 0; index < n; index++) {
		scanf("%d", &m[index]);
	}

	int result = getNum(m, n);
	printf("%d", result);
	return 0;
}

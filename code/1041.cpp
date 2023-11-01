#include <stdio.h>
#define TRUE 1
#define FALSE 0

int is2Pow(int num) {
	while (num != 1) {
		if (num % 2 != 0) {
			return FALSE;
		}
		num /= 2;
	}
	return TRUE;
}

int main() {
	int num ;
	scanf("%d", &num);

	if (is2Pow(num)) {
		printf("true");
	} else {
		printf("false");
	}

	return 0;
}

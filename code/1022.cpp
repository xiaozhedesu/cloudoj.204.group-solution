#include <stdio.h>

static int count = 0;

void upStep(int num) {
	if (num == 1) {
		printf("%d ", num);
	} else if (num == 2) {
		upStep(1);
		upStep(1);
		printf("%d ", num);
	} else {
		upStep(1);
		upStep (num - 1);

		putchar('\n');

		upStep(2);
		upStep (num - 2);
	}
}

int main() {
	int n;
	scanf("%d", &n);

	upStep(n);

	return 0;
}

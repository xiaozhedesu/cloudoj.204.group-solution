#include <stdio.h>
#define KAMINUM 142857

int main() {
	for (int i = 0; i < 7; i++) {
		printf("142857 * %d = %d\n", i + 1, KAMINUM * (i + 1));
	}

	return 0;
}


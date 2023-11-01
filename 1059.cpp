#include <stdio.h>
#define LENGTH 1024

int mbTurnSizeofInt(int mb) {
	return mb * LENGTH * LENGTH / sizeof(int);
}

int main() {
	int mb;
	scanf("%d", &mb);

	int result = mbTurnSizeofInt(mb);
	printf("%d", result);
	return 0;
}

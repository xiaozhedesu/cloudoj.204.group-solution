#include <stdio.h>
#include <math.h>
#define TRUE 1
#define FALSE 0

int isPrime(int num) {
	if (num == 1) {
		return FALSE;
	}
	for (int i = 2; i < sqrt(num); i++) {
		if (num % i == 0) {
			return FALSE;
		}
	}
	return TRUE;
}

int main() {
	int num;
	scanf("%d", &num);

	int result = isPrime(num);

	if (result == TRUE) {
		printf("yes");
	} else if (result == FALSE) {
		printf("no");
	}

	return 0;
}

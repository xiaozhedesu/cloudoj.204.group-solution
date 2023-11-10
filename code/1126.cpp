#include <stdio.h>
#include <math.h>

bool chengNumber(int n);

bool isPrime(int num);

int main() {
	int n;
	scanf("%d",&n);

	bool boo = chengNumber(n);

	if(boo) {
		printf("Yes");
	} else {
		printf("No");
	}

	return 0;
}

bool chengNumber(int n) {
	//if n == a * b + a + b
	//that n + 1 == (a + 1) * (b + 1)
	int N = n + 1;
	return !isPrime(N);
}

bool isPrime(int num) {
	if(num <= 1) {
		return false;
	}

	for(int i = 2; i <= sqrt(num); i++) {
		if(num % i == 0) {
			return false;
		}
	}
	return true;
}

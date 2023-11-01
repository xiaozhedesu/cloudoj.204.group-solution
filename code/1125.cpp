#include <stdio.h>

void calcTime(int a, int b, int c, int d) {
	//c时d分 － a时b分 = e时f分
	if (b > d) {
		d += 60;
		c--;
	}
	int e = c - a;
	int f = d - b;
	printf("%d %d", e, f);
}

int main() {
	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);

	calcTime(a, b, c, d);

	return 0;
}

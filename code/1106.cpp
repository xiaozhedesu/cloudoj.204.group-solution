#include <stdio.h>

int sanHuanYi(int n);

int main() {
	int n;
	scanf("%d",&n);

	int result = sanHuanYi(n);
	printf("%d",result);

	return 0;
}

int sanHuanYi(int n) {
	if(n < 3) {
		return 0;
	} else {
		//n / 3 -> 换出来的圣遗物
		//n % 3 -> 不够数的圣遗物
		//加起来可能会凑够数（比如 n = 5 的情况
		return n / 3 + sanHuanYi(n / 3 + n % 3);
	}
}

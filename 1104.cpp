#include <stdio.h>

// 现有n个人在玩报数游戏
//报数规律与游戏轮数有关

//(1,2,3...i + 1);

int function(int poss[], int length) {
	//模仿报数
	int n = length;
	for (int turn = 1; turn <= length; turn++) {
		int count = 0;
		for (int pos = 0; pos < length; pos++) {
			//报数为1就出列
			if (poss[pos] % (turn + 1) == 1) {
				poss[pos] = 0;
				count++;
			}
		}

		//此轮剩余人数
		n -= count;
		printf("n = %d\n", n);
		for (int i = 0; i < length; i++) {
			printf("poss[%d] = %d\n", i, poss[i]);
		}
	}
	return 0;
}

int main() {
	//输入及初始化
	int n;
	scanf("%d", &n);
	int poss[n];
	for (int i = 0; i < n; i++) {
		poss[i] = i + 1;
	}

	//代码逻辑

	int result = function(poss, n);

	//输出结果
	printf("%d", result);

	return 0;
}

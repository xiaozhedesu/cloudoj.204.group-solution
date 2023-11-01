#include <stdio.h>

void printArray(int nums[], int length) {
	for (int i = 0; i < length; i++) {
		putchar(nums[i]);
	}
	putchar('\n');
}

int main() {
	//输入
	int n ,m;	//代表n行m列
	scanf("%d %d", &n, &m);
	int x, y;	//ZhangSonSheep被传送到的位置
	scanf("%d %d", &x, &y);
	int s;		//士兵的数量
	scanf("%d", &s);
	int position[s][2];	//代表s个士兵的坐标
	for (int i = 0; i < s; i++) {
		scanf("%d %d", &position[i][0]);
	}

	return 0;
}

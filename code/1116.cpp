#include <stdio.h>

void printArray(int nums[], int length) {
	for (int i = 0; i < length; i++) {
		putchar(nums[i]);
	}
	putchar('\n');
}

int main() {
	//����
	int n ,m;	//����n��m��
	scanf("%d %d", &n, &m);
	int x, y;	//ZhangSonSheep�����͵���λ��
	scanf("%d %d", &x, &y);
	int s;		//ʿ��������
	scanf("%d", &s);
	int position[s][2];	//����s��ʿ��������
	for (int i = 0; i < s; i++) {
		scanf("%d %d", &position[i][0]);
	}

	return 0;
}

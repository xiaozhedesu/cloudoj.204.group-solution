#include <stdio.h>

//���ں�ŵ���ƶ��������ⲻ�ù����ƶ���������£�

int main() {
	int n;
	scanf("%d", &n);

	printf("%d", (1 << n) - 1);

	return 0;
}
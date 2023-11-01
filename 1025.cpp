#include <stdio.h>

//�������

int arrangement(int up, int down) {
	if (up == 0) {
		return 1;
	}
	//����������
	int result = 1;
	for	(int i = down; i > down - up; i--) {
		result *= i;
	}
	return result;
}

int combination(int up, int down) {
	//���������
	return arrangement(up, down) / arrangement(up, up);
}

int printYangHuiTriangle(int n) {
	//���㲢��ӡ�������
	for (int linage = 0; linage < n; linage++) {
		for ( int j = n; j > linage + 1; j--) {
			printf(" ");
		}
		for (int i = 0; i <= linage; i++) {
			printf("%d", combination(i, linage));
			if (i != linage) {
				printf(" ");
			}
			//printf("combination(%d,%d) = %d\n", i, linage, combination(i, linage));
		}
		if (linage != n - 1) {
			printf("\n");
		}
	}
}

int main() {
	printYangHuiTriangle(5);

	return 0;
}

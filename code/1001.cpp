#include <stdio.h>

void numberTriangle(int line) {
	for (int i = 1; i <= line; i++) {
		//����
		for (int j = line - i; j > 0; j--) {
			printf(" ");
		}

		//��ӡÿ�е�һ����
		printf("%d", i);

		//��ӡʣ�µ�
		for	(int printNum = i - 1; printNum > 0; printNum--) {
			printf(" %d", i);
		}
		if (i != line) {
			printf(" \n");
		}
	}
}

int main() {
	//����һ����
	int line;
	scanf("%d", &line);

	//��ӡ���ֽ�����
	numberTriangle(line);

	return 0;
}
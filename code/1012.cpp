#include <stdio.h>

int printHourglass(int num, char sign) {
	//�ҳ��ϰ�ɳ©�����������У��Ĳ���
	int line = 1;
	while (num > 2 * (line + 1) * (line + 1) - 1) {
		line++;
	}
	int nokori = num - (2 * line * line - 1);

	//��ӡɳ©
	//�ȷ���
	for (int outer = line; outer > 0; outer--) {
		//�ո�
		for (int inner = 0; inner < line - outer; inner++) {
			putchar(' ');
		}
		//����
		for (int inner = 0; inner < 2 * outer - 1; inner++) {
			putchar(sign);
		}
		putchar('\n');

	}
	//������,û�е�����
	for (int outer = 1; outer < line; outer++) {
		//�ո�
		for (int inner = 0; inner < line - 1 - outer; inner++) {
			putchar(' ');
		}
		//����
		for (int inner = 0; inner < 2 * outer + 1; inner++) {
			putchar(sign);
		}
		if (outer + 1 != line) {
			putchar('\n');
		}
	}

	return nokori;
}


int main() {
	int num;
	char sign;
	scanf("%d %c", &num, &sign);
	int result = printHourglass(num, sign);

	if (result != 0) {
		printf("\n%d", result);
	}

	return 0;
}

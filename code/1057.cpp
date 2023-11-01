#include <stdio.h>
#include <string.h>
#define TRUE 1
#define FALSE 0

int isDeleteString(char string[], int length) {
	//����ַ������м���a,b,c�����������ַ�������ɾ�ֱ꣬������
	int number[3] = {0, 0, 0};
	for (int index = 0; index < length; index++) {
		if (string[index] == 'a') {
			number[0]++;
		} else if (string[index] == 'b') {
			number[1]++;
		} else if (string[index] == 'c') {
			number[2]++;
		} else {
			return FALSE;
		}
	}

	//ͨ���۲췢�֣����Գɹ�ɾ����ַ�����ĸ�������ص㣺
	//a�ĸ�����c�ĸ���Ӧ�õ���b�ĸ���
	if (number[0] + number[2] == number[1]) {
		return TRUE;
	} else {
		return FALSE;
	}
}

void printResult(int result) {
	if (result == TRUE) {
		printf("YES");
	} else {
		printf("NO");
	}
}

int main() {
	char string[100];
	scanf("%s", &string);
	int length = strlen(string);

	int result = isDeleteString(string, length);
	printResult(result);
	return 0;
}

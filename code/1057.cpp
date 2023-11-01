#include <stdio.h>
#include <string.h>
#define TRUE 1
#define FALSE 0

int isDeleteString(char string[], int length) {
	//输出字符串里有几个a,b,c，出现其他字符代表不能删完，直接跳出
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

	//通过观察发现，可以成功删完的字符串字母个数有特点：
	//a的个数加c的个数应该等于b的个数
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

#include <stdio.h>
#include <string.h>

void printWord(char string[],int start,int end) {
	for(int i = start; i <= end; i++) {
		putchar(string[i]);
	}
}

int main() {
	char string[100];
	gets(string);

	int length = strlen(string);
	int stringEnd = length - 1;
	//��¼��β�ַ���ÿɨ���ո�ʹ�ӡ������ʣ�Ȼ��ı��βλ�ü���ɨ
	for(int num = length - 1; num > 0; num--) {
		if(*(string + num) == ' ') {
			printWord(string, num + 1, stringEnd);
			stringEnd = num - 1;
			putchar(' ');
		}
	}
	//��ӡ���һ������һ�����ַ�
	printWord(string,0,stringEnd);

	return 0;
}

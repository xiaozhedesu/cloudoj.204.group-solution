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
	//记录结尾字符，每扫到空格就打印这个单词，然后改变结尾位置继续扫
	for(int num = length - 1; num > 0; num--) {
		if(*(string + num) == ' ') {
			printWord(string, num + 1, stringEnd);
			stringEnd = num - 1;
			putchar(' ');
		}
	}
	//打印最后一个（第一个）字符
	printWord(string,0,stringEnd);

	return 0;
}

#include <stdio.h>
#include <string.h>
#define TRUE 1
#define FALSE 0

int isRightBracket(char *string, int length);

int main() {
	char string[100];
	scanf("%s", &string);

	if (isRightBracket(string, strlen(string))) {
		printf("YES");
	} else {
		printf("NO");
	}

	return 0;
}

int isRightBracket(char *string, int length) {
	char *left = string;
	char *right = string + length - 1;

	while (right - left != 1) {
		if (*right - *left != 32) {
			return FALSE;
		}
		left++;
		right--;
	}
	return TRUE;
}
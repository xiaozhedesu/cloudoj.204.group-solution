#include <stdio.h>
#include <string.h>

int main() {
	char string[100];
	do {
		scanf("%s\n", &string);
	} while (getchar() == ' ');

	return 0;
}

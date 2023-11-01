#include <stdio.h>
#include <string.h>

void printDayBeforeYesterday(char *day, int length) {
	char *days[3];
	char *token;

	token = strtok(day, "-");

	int temp = 0;
	while (token != NULL) {
		days[temp++] = token;

		token = strtok(NULL, "-");
	}
}

int main() {
	char day[11];
	scanf("%s", &day);

	printDayBeforeYesterday(day, strlen(day));

	return 0;
}

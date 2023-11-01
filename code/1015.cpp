#include <stdio.h>

void downTriangle(int num) {
	for (int line = 0; line < num; line++) {
		for (int raw = 0; raw < num ; raw++) {
			if (raw < line) {
				printf(" ");
			} else {
				printf("*");
			}
		}
		printf("\n");
	}
}

int main() {
	int line;
	scanf("%d", &line);

	downTriangle(line);
	return 0;
}

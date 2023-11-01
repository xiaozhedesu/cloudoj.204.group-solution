#include <stdio.h>

int overtomorrow(int day) {
	if (!(day >= 1 && day <= 7)) {
		printf("Êý¾ÝÓÐÎó£¡");
		return 0;
	}
	int otDay = day + 2;
	if (otDay > 7) {
		return otDay - 7;
	}
	return otDay;
}

int main() {
	int today;
	scanf("%d", &today);

	printf("%d", overtomorrow(today));

	return 0;
}

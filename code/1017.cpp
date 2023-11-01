#include <stdio.h>
#define TRUE 1
#define FALSE 0

int function(int num) {
	//计数器
	int count = 0;

	//3N+1操作
	while (TRUE) {
		//跳出循环条件
		if (num == 1) {
			return count;
		}

		if (num % 2 == 1) {
			num = 3 * num + 1;
		} else {
			num /= 2;
		}
		count++;
	}
}

int main() {
	int num;
	scanf("%d", &num);

	int count = function(num);
	printf("%d", count);

	return 0;
}

#include <stdio.h>
#define TRUE 1
#define FALSE 0

int function(int num) {
	//������
	int count = 0;

	//3N+1����
	while (TRUE) {
		//����ѭ������
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

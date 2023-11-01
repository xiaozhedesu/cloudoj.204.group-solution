#include <stdio.h>

//询问年份的50年之后是多少世纪

int main() {
	//输入
	int year ;
	scanf("%d", &year);

	//转换
	year += 50;
	int century = year / 100 + 1;
	printf("%d", century);

	return 0;
}

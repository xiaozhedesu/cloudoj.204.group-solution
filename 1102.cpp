#include <stdio.h>

//ѯ����ݵ�50��֮���Ƕ�������

int main() {
	//����
	int year ;
	scanf("%d", &year);

	//ת��
	year += 50;
	int century = year / 100 + 1;
	printf("%d", century);

	return 0;
}

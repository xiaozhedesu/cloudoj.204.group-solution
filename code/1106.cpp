#include <stdio.h>

int sanHuanYi(int n);

int main() {
	int n;
	scanf("%d",&n);

	int result = sanHuanYi(n);
	printf("%d",result);

	return 0;
}

int sanHuanYi(int n) {
	if(n < 3) {
		return 0;
	} else {
		//n / 3 -> ��������ʥ����
		//n % 3 -> ��������ʥ����
		//���������ܻ�չ��������� n = 5 �����
		return n / 3 + sanHuanYi(n / 3 + n % 3);
	}
}

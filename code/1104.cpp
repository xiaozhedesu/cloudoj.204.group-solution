#include <stdio.h>

// ����n�������汨����Ϸ
//������������Ϸ�����й�

//(1,2,3...i + 1);

int function(int poss[], int length) {
	//ģ�±���
	int n = length;
	for (int turn = 1; turn <= length; turn++) {
		int count = 0;
		for (int pos = 0; pos < length; pos++) {
			//����Ϊ1�ͳ���
			if (poss[pos] % (turn + 1) == 1) {
				poss[pos] = 0;
				count++;
			}
		}

		//����ʣ������
		n -= count;
		printf("n = %d\n", n);
		for (int i = 0; i < length; i++) {
			printf("poss[%d] = %d\n", i, poss[i]);
		}
	}
	return 0;
}

int main() {
	//���뼰��ʼ��
	int n;
	scanf("%d", &n);
	int poss[n];
	for (int i = 0; i < n; i++) {
		poss[i] = i + 1;
	}

	//�����߼�

	int result = function(poss, n);

	//������
	printf("%d", result);

	return 0;
}

#include <stdio.h>

//����Ѻ������ĳɣ�����mikumiku������
int mikumikuniShiteageru(char mikumiku[],int length);

int main() {
	int n;
	scanf("%d",&n);
	char mikumiku[n + 1];
	scanf("%s",mikumiku);

	int result =  mikumikuniShiteageru(mikumiku,n);
	printf("%d",result);

	return 0;
}

int mikumikuniShiteageru(char mikumiku[],int length) {
	char miku[4] = {'M','I','K','U'};
	
	int deleteCount = 0;
	int mikuIndex = 0;
	//һ��һ�����MIKU���Բ��ϵľ�ɾ��
	for(int index = 0; index < length; index++) {
		if(mikumiku[index] == miku[mikuIndex]) {
			mikuIndex++;
			if(mikuIndex == 4) {
				mikuIndex -= 4;
			}
		} else {
			deleteCount++;
		}
	}
	//����ĩβ�Ĳ���MIKU�Ĳ���Ҳ��Ҫɾ��������Ҫ��mikuIndex
	return deleteCount + mikuIndex;
}

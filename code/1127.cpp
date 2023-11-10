#include <stdio.h>

//建议把函数名改成：把你mikumiku掉（）
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
	//一个一个配对MIKU，对不上的就删除
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
	//关于末尾的不足MIKU的部分也需要删除，所以要加mikuIndex
	return deleteCount + mikuIndex;
}

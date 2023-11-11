#include <stdio.h>

void scanArray(int array[], int length);

void perfectStudent(int n,int normalScore[],int finalTest[]);

int main() {
	int n;
	scanf("%d",&n);
	int normalScore[n];
	scanArray(normalScore,n);
	int finalTest[n];
	scanArray(finalTest,n);

	perfectStudent(n,normalScore,finalTest);

	return 0;
}

void perfectStudent(int n,int normalScore[],int finalTest[]) {
	double finalScore[n];
	for(int num = 0; num < n; num++) {
		finalScore[num] = normalScore[num]*0.5 + finalTest[num]*0.5;
	}

	int count = 0;
	for(int index = 0; index < n; index++) {
		if(finalScore[index] < 60) {
			count++;
		}
	}

	if(count == 0) {
		printf("Imperfect");
	} else if(count <= 3) {
		printf("Perfect");
	} else {
		printf("So perfect");
	}
}

void scanArray(int array[], int length) {
	for (int index = 0; index < length; index++) {
		scanf("%d", &array[index]);
	}
}
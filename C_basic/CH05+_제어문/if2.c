#include <stdio.h>

int main() {
	printf("���� ??");

	int score;
	scanf("%d", &score);
	do {
		printf("���� (0~100)?");
		scanf("%d", &score);

	} while (score < 0 || score>100);
	if(score>=90)

	{
		printf("A�����Դϴ�.");	
	}

	else if(score>=80){
	
		printf("B�����Դϴ�.");
	}

	else if (score >= 70) {

		printf("C�����Դϴ�.");

	}
	else if(score >= 60)

	{
		printf("D�����Դϴ�.");
	}
	else {

		printf("����");

	}






}
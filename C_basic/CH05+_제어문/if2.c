#include <stdio.h>

int main() {
	printf("점수 ??");

	int score;
	scanf("%d", &score);
	do {
		printf("점수 (0~100)?");
		scanf("%d", &score);

	} while (score < 0 || score>100);
	if(score>=90)

	{
		printf("A학점입니다.");	
	}

	else if(score>=80){
	
		printf("B학점입니다.");
	}

	else if (score >= 70) {

		printf("C학점입니다.");

	}
	else if(score >= 60)

	{
		printf("D학점입니다.");
	}
	else {

		printf("낙제");

	}






}
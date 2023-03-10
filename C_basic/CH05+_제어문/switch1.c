#include <stdio.h>

int main() {
	printf("점수 ??");

	int score;
	scanf("%d", &score);


	switch (score / 10) // 10으로 나누고 케이스에 되늰 것
	{
	case 10:
	case 9:
		printf("%d, A학점 \n", score);
		break;
	case 8:
		printf("%d, B학점 \n", score);
		break;
	case 7:
		printf("%d, C학점 \n", score);
		break;
	case 6:
		printf("%d, D학점 \n", score);
		break;
	default:
		printf("%d, 노력바람 !!! \n", score);
		break;
	}



}
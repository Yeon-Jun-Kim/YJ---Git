#include <stdio.h>

int main() {
	printf("���� ??");

	int score;
	scanf("%d", &score);


	switch (score / 10) // 10���� ������ ���̽��� �Ǵ� ��
	{
	case 10:
	case 9:
		printf("%d, A���� \n", score);
		break;
	case 8:
		printf("%d, B���� \n", score);
		break;
	case 7:
		printf("%d, C���� \n", score);
		break;
	case 6:
		printf("%d, D���� \n", score);
		break;
	default:
		printf("%d, ��¹ٶ� !!! \n", score);
		break;
	}



}
//Array7.c
#include <stdio.h>

int main()
{	
	int score[5][7] = {
						{90, 57, 74, 80},
						{60, 50, 84, 60},
						{70, 77, 68, 90},
						{80, 97, 70, 51},
						{57, 55, 54, 70}
	};
	int i, j;
	int row = sizeof(score) / sizeof(score[0]);
	int col = sizeof(score[0]) / sizeof(score[0][0]);
	
	scoreCalc(score,row,col - 3);
	

	////��, ��� ���ϱ�
	//for (i = 0; i < 5; i++)
	//{
	//	for (j = 0; j < 4; j++)
	//		score[i][4] += score[i][j];
	//	score[i][5] = score[i][4] / 4;
	//}

	////�������ϴ� �˰���
	//for (i = 0; i < 5; i++)
	//{
	//	score[i][6] = 1;
	//	for (j = 0; j < 5; j++)
	//	{
	//		if (score[i][5] < score[j][5])
	//			score[i][6]++;
	//	}
	//}

	////������ ���
	//heading();
	//for (i = 0; i < 5; i++)
	//{
	//	for (j = 0; j < 7; j++)
	//		printf("%3d, ", score[i][j]);
	//	printf("\n");
	//}

	//return 0;
}

heading()
{
	printf("==================================\n");
	printf("���� ���� ���� ���� ���� ��� ���� \n");
	printf("==================================\n");
}

scoreCalc(int (*score)[7], int row, int col) {
	int i, j;
	//��, ��� ���ϱ�
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
			*(*(score+i)+4) += *(*(score+i)+j);
		*(*(score + i) + 5) = *(*(score + i) + 4) / col;
	}

	//�������ϴ� �˰���
	for (i = 0; i < row; i++)
	{
		score[i][6] = 1;
		for (j = 0; j < 5; j++)
		{
			if (score[i][5] < score[j][5])
				score[i][6]++;
		}
	}

	//������ ���
	heading();
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 7; j++)
			printf("%3d, ", score[i][j]);
		printf("\n");
	}

	return 0;



}
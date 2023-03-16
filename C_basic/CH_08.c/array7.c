#include <stdio.h>


int main() {


	int score[5][7] = {
		{90,67,65,75},
		{80,68,23,54},
		{77,63,69,46},
		{23,41,65,84},
		{94,82,42,82}

	};

	int i, j;
	int sum = 0, avg;


	for (i = 0; i < 5; i++) {
		int sum = 0, avg;
		for (j = 0; j < 4; j++) {

			sum += score[i][j];

		}
		printf("\n");
		score[i][4] = sum;
		score[i][5] = sum / 4;
		
	}
	int rank;
	for (i = 0; i < 5; i++) {
		rank = 1;
		for (j = 0; j < 5; j++) {
			if (score[i][4] < score[j][4])
			{
				rank++;
			}
			score[i][6] = rank;
		}
	}


	heading();
	//데이터 출력
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 7; j++) {
			printf("%d ", score[i][j]);
		}
		printf("\n");
	}

	

	}


heading() {
	printf("---------------------------------\n");
	printf("국어영어수학과학총점평균석차\n");
	printf("---------------------------------\n");


}
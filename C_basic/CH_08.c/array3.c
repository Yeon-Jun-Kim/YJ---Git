#include <stdio.h>
#define score_arr 5


int main() {
	int i;
	int score[score_arr + 4] = { 0 };
	int sum = 0, max, min;
	printf("%d, %d \n", sizeof(score[0]), sizeof(score));

	printf(" %p, %d \n", &score[0], score[0]);


	printf("%p, %d\n", &score[0], score[0]);

	for (i = 0; i < score_arr ; i++)
	{
		printf("input number");
		scanf("%d", &score[i]);
		sum += score[i];



	}
	max = min = score[0];

	for (i = 0; i < score_arr; i++)
	{
		printf("%d", score[i]);
		if (max < score[i]) {
			max = score[i];

		}
		if (min > score[i]) {

			min = score[i];
		}
	}
	//score[5] = 100; 디버깅 오류
	//score[10] = 100; 디버깅 오류
	printf("합 : %d 평균 : %d\n", sum, sum / (score_arr));
	printf("최대 : %d 최소 : %d\n", max, min);
	printf("%p, %d \n", &score[5], score[5]);
	printf("%p, %d \n", &score[10], score[10]);
	score[score_arr] = sum;
	score[score_arr+1] = sum / (score_arr);
	score[score_arr + 2] = max;
	score[score_arr + 3] = min;
	for (i = 0; i < score_arr + 4; i++) {

	printf("%d", score[i]);
}


}
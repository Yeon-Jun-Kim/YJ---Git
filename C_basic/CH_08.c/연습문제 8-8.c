#include <stdio.h>
#define MAX 5
int main() {

	int score[MAX], sum = 0, max, min;
	int i;

	for (i = 0; i < MAX; i++) 
	{
	
		printf("�����Է� 1~ 100 ? ");
		scanf("%d", &score[i]); // & ���°� ������������.
		while (score[i] < 0 || score[i] >100) {
			printf("�����Է� 1~ 100");
			scanf("%d", &score[i]);
		}
		sum += score[i];
	}

	max = min = score[0];
	for (i = 1; i < MAX; i++) {
		if (score[i] > max) {

			max = score[i];
		}
		if (score[i] < min) {
			min = score[i];
		}

	}



	printf("\n");
	for (i = 0; i < MAX; i++) {
		printf("%d ", score[i]);
	}
	printf("\n");
	printf(" , ������� : %0.2f \n", (float)sum / MAX);
	printf("max : %d, min : %d\n", max, min);

	


	


}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void DiceGame();

int sum_1, sum_2;
int main() {
	int i;
	srand(time(NULL));
	for (i = 1; i <= 5; i++)

	{
		DiceGame();

	}

	printf("x 누적 : %d , y 누적 %d \n", sum_1, sum_2);

	if (sum_1 > sum_2) {
		printf("x사용자 승\n");

	}
	else if (sum_1 == sum_2) {
		printf("무승부\n");

	}
	else {
		printf("y사용자 승\n");

	}
	

}

void DiceGame() {
	int x, y;
	x = rand() % 7 + 1;
	y = rand() % 7 +1;
	printf("x결과 : %d y결과 : %d\n", x, y);
	sum_1 += x;
	sum_2 += y;

}
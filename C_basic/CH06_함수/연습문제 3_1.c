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

	printf("x ���� : %d , y ���� %d \n", sum_1, sum_2);

	if (sum_1 > sum_2) {
		printf("x����� ��\n");

	}
	else if (sum_1 == sum_2) {
		printf("���º�\n");

	}
	else {
		printf("y����� ��\n");

	}
	

}

void DiceGame() {
	int x, y;
	x = rand() % 7 + 1;
	y = rand() % 7 +1;
	printf("x��� : %d y��� : %d\n", x, y);
	sum_1 += x;
	sum_2 += y;

}
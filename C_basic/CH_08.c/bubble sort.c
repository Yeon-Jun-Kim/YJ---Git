#include <stdio.h>

int main() {
	int num[5] = { 94,9,67, 120,1 }, i, j, tmp;



	// bubble sort
	for (i = 0; i < 4; i++)
	{

		for (j = 0; j < 4 - i; j++)
		{ if(num[j] > num[j+1])
		{
			tmp = num[j];
			num[j] = num[j + 1];
			num[j + 1] = tmp;
		}


		}
	}

	for (i = 0; i < 5; i++) {
		printf("%d, ", num[i]);

	}
	printf("\n");








}
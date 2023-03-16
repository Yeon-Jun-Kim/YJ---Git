#include <stdio.h>


int main() {
	int i, j;

	int score[3][3] = {
		{13,4,30},
		{34,2,5},
		{7,15,27}
	};
	int B[3][3];

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			B[j][i] = score[i][j];
		}
	}

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("%d ", B[i][j]);

		}
		printf("\n");
	}
}
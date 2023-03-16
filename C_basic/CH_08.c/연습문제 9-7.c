#include <stdio.h>

int main() {
	int i,j, c = -6;
	int num[7][7] = {0};



	for (i = 0; i < 7; i++) {
		c += 7;
		for (j = 0; j < i+ 1; j++) {
			num[i][j] = c + j;

		}
	}


	for (i = 0; i < 7; i++) {
		for (j = 0; j < i+ 1; j++) {
			printf("%d ", num[i][j]);
		}
		printf("\n");
	}

}
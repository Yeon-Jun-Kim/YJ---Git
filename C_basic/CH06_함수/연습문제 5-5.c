#include <stdio.h>
int main() {
	int i, j, k, tot, count = 0;
	for (i = 1; i <= 10; i++) {
		for (j = 1; j <= 10; j++) {
			for (k = 1; k <= 10; k++) {
				tot = 2 * i + 3 * j + 5 * k;
				if(tot == 81)
				{
					count += 1;
					printf("2g:%3d, 3g: %3d, 5g:%3d \n", i, j, k);
				}
			}
		}
	}
	printf("����� �� : %d \n", count);



}
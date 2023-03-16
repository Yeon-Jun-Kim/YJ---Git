#include <stdio.h>

int main() {
	int max,i, idx;
	int num[6] = { -600,-3,90,75,920,79 };
	max = num[0];
	for (i = 0; i < 6; i++) {
		if (max < num[i]) {
			max = num[i];
			idx = i;
		}

	}

	printf("max : %d idx %d", max, idx);
}
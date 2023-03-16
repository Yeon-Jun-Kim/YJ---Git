#include <stdio.h>

int main() {
	int i, num, max;
	int tmp[10] = {0};
	int x[10] ;
	for (i = 0; i < 10; i++) {
		do {
			printf("%d값 입력? (0~9)",i);
			scanf("%d", &num);
		} while (0 > num || num > 9);
		tmp[num] += 1;
	}

	max = 0;
	for (i = 1; i < 10; i++) {
		if(tmp[max] < tmp[i]){
			max = i;
		}

	}
	printf("가장많은 값: %d 갯수 %d", max, tmp[max]);

}
#include <stdio.h>

int main() {
	int i, num, max;
	int tmp[10] = {0};
	int x[10] ;
	for (i = 0; i < 10; i++) {
		do {
			printf("%d�� �Է�? (0~9)",i);
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
	printf("���帹�� ��: %d ���� %d", max, tmp[max]);

}
#include <stdio.h>

int main() {
	char names[3][20];
	int i;

	for (i = 0; i < 3; i++) {
		printf("input name? ");
		gets(names[i]); // ���� �ּҸ� ���Ѵ�.


	}

	printf("\n");
	for (i = 0; i < 3; i++) {
		printf("%s \n", names[i]); // �����ּҸ� ���Ѵ�.

	}

}
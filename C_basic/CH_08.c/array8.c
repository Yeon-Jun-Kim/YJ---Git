#include <stdio.h>

int main() {
	char names[3][20];
	int i;

	for (i = 0; i < 3; i++) {
		printf("input name? ");
		gets(names[i]); // 시작 주소를 말한다.


	}

	printf("\n");
	for (i = 0; i < 3; i++) {
		printf("%s \n", names[i]); // 시작주소를 말한다.

	}

}
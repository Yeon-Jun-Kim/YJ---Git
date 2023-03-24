#include <stdio.h>

int main() {

	int i;
	char c1 = 'A', tmp[100];
	char str[10] = "Kingdom";
	//1차원 문자배열은 하나의 문자열을 담는다.

	printf("%d, %d, %d \n", sizeof(c1), sizeof(str[0]), sizeof(str));
	printf("%c, %c, %p, %p \n\n", c1, str[0], &str[0], str);
	printf("%p, %s \n\n", str,str+4); // 4 부터  null 나올때까지 읽음


	printf("input string ?");

	gets(tmp);
	while (strlen(tmp) >= 10) {
		printf("input string ?");
		gets(tmp);
	}
	strcpy(str,tmp);
	printf("%p, %s \n", str, str);

	printf("\n");
	for (i = 0; i < 10; i++) {

		printf("%p:%c,%d\n",&str[i], str[i], str[i]);
	}


}
#include <stdio.h>

int main() {

	int i;
	char c1 = 'A', tmp[100];
	char str[10] = "Kingdom";
	//1���� ���ڹ迭�� �ϳ��� ���ڿ��� ��´�.

	printf("%d, %d, %d \n", sizeof(c1), sizeof(str[0]), sizeof(str));
	printf("%c, %c, %p, %p \n\n", c1, str[0], &str[0], str);
	printf("%p, %s \n\n", str,str+4); // 4 ����  null ���ö����� ����


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
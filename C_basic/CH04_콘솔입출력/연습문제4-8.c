#include <stdio.h>
#include <ctype.h>

int main() {
	char celsius;
	int out, tmp;
	printf("ȭ���̸� f �����̸� c �Է�");
	scanf("%c", &celsius);
	celsius = toupper(celsius);

	printf("%s �µ�?", celsius == 'F' ? "ȭ��" : "����");
	scanf("%d", &tmp);

	printf("%d \n", tmp);

	out = celsius == 'F'? (tmp - 32) / 1.8 : (tmp * 1.8) +32;

	printf("%d \n",out);



}
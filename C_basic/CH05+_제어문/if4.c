#include <stdio.h>
#include <ctype.h>
int main() {
	char w;
	int c;
	printf("���ڸ� �Է����ּ��� p or k\n");
	w = getchar();
	w= towlower(w);
	if (w == 'p') {
		printf("�Ŀ�带 �Է����ּ���");
		scanf("%d", &c);
		printf("%d�Ŀ��� %0.2fkg �Դϴ�.", c, 0.45358237 * c);
	}
	else if(w == 'k') {
		printf("kg�� �Է����ּ���");
		scanf("%d", &c);
		printf("%dkg�� %0.2f�Ŀ�� �Դϴ�.", c, c / 0.45358237);


	}

	else {
		printf("�߸��� �Է��Դϴ�.");

	}

}
#include <stdio.h>
/*Ű����κ��� ����, ����, ȸ�� �ּҸ� �Է¹޾� ����Ϸ��� �Ѵ�.
�̶� �ԷµǴ� �Ǽ��� ���� ���ϸ�, ������  "end"�̸� �Է� ����
���� ����� ��� �� ���α׷��� ����*/
int main() {
	char name[20];
	int sal;
	char address[50];
	int sum = 0, cn = 0;
	while (1) {
		printf("�̸�(�Է����� : end)?");
		gets(name); // �ּҸ� ���ϴ� ���� �ƴϴ�. ���⼭��
		if(strcmp(name,"end") == 0)
		{
			break;
		}
		printf("����?");
		scanf("%d%*c", &sal);
		printf("�ּ�?");
		scanf("%s",address);
		cn++;
		sum += sal;
	}
	printf("����� %f", (float)sum/cn);

	

	return 0;
}
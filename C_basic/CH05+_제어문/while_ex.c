#include <stdio.h>

int main() {

	int c = 0, sum = 0;
	int input;
	while (1) {
		printf("������ ���ڸ� �Է����ּ���. �Էµ����Ͱ� -99999�̸� �Է��� �����մϴ�.");
		scanf("%d%*c", &input);
		if (input == -99999) {
			break;


		}
		c += 1;
		sum += input;
	}
	printf("�� : %d ��� : %0.2f", sum, (float)sum / c);

}
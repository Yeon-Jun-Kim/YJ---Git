#include <stdio.h>
// �ǿ������� Ÿ���� �ٸ��� �������� ū���� Ÿ������ Ȯ���Ŵ
// ���� ūŸ���� ��
// �ǿ������� �� Ÿ���� ������ ����Ǵ� ����� �� Ÿ��




int main()
{
	char ch;
	int x;
	float y;

	x = 100, y = 30;
	printf("%d\n", x / 30);
	printf("%f\n", x / y); // ������ ����ȯ 

	printf("%f, %d \n", y, (int)y); // ����� ����ȯ
	// cast ������ (type)
	x = 130;
	y = x;
	printf("x:%d, y:%f\n", x, y);

	y = 5.234;
	x = y;
	printf("x:%d, y:%f\n", x, y);

	// char�� 127 ������ ���������ε� �� �� ����
	x = 99;
	ch = x;
	printf("x:%d, ch:%d\n", x, ch);
}
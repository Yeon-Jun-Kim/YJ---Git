#include <stdio.h>

int main() {
	int n;
	int c = 0;
	int i;
	printf("n�� �Է��ϼ���(1~100)");
	scanf("%d", &n);
	for (i = n; i < 100; i += n)
	{
		printf("%d\n",i);
		c++;
	}
	printf("%d�� ����� ������ %d", n, c);



}
#include <stdio.h>

int main()
{
	int ounce;
	printf("������ ������ �½� �Է�");
	scanf("%d", &ounce);

	printf("%d �½��� �׷����� %.2f gm \n", ounce, ounce * 28.349523);
	printf("%d �½��� �������� %.2f L \n", ounce, (ounce * 28.349523) / 1000);




}
#include <stdio.h>

int main()
{
	char ch = 'A';
	int num = 500;
	double dnum = 1.1;
	float fnum = 5.3F;

	printf("%f\n", fnum);

	printf("%d, %d, %d \n", sizeof(char), sizeof(int), sizeof(double));
	printf("%d, %d,fnum %d %d \n", sizeof(ch), sizeof(num), sizeof(fnum), sizeof(dnum));
	printf("%d, %d, %d \n", sizeof(10), sizeof(1.1),sizeof(1.2F));

	printf("%c,%d,%f,%lf \n", ch, num, fnum, dnum);
	printf("%p, %p,%p,%p\n", &ch, &num, &fnum, &dnum);
	// �������ϸ� 8����Ʈ ����� �����ϰ� �� �׷��� f�� ������ f �ٿ����� size of �� 
	







}
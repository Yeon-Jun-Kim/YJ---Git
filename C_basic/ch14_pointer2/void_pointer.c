#include <stdio.h>

int main()
{
	char ch = 'A';
	int num = 100;
	double dnum = 5.6;

	void* ptr;//void �� ������ � �ڷ����̵� ����ų �� �ִ�. ������ ����� ���� ����ȯ�� ������Ѵ�.




	printf("ptr sizeof : %d\n", sizeof(ptr));

	ptr = &ch;
	printf("%c\n", *(char*)ptr);

	ptr = &num;
	printf("%d\n", *(int*)ptr);

	ptr = &dnum;
	printf("%lf\n", *(double*)ptr);



}
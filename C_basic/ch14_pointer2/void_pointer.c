#include <stdio.h>

int main()
{
	char ch = 'A';
	int num = 100;
	double dnum = 5.6;

	void* ptr;//void 형 포인터 어떤 자료형이든 가리킬 수 있다. 하지만 사용할 때는 형변환을 해줘야한다.




	printf("ptr sizeof : %d\n", sizeof(ptr));

	ptr = &ch;
	printf("%c\n", *(char*)ptr);

	ptr = &num;
	printf("%d\n", *(int*)ptr);

	ptr = &dnum;
	printf("%lf\n", *(double*)ptr);



}
#include <stdio.h>
int* funcB(int* ptr);
int main()
{
	
	int num[500] = { 100,200,300,400,500, 0 };
	int* salTot;
	funcA(num);
	salTot = funcB(num);
	printf("�ּ� : %p total : %d",salTot, *salTot); // �ּҴ� ������ ������ �Ҹ�Ǿ��� ������ �����Ⱚ�� ����.

}
int *funcB(int *ptr)
{
	static int tot = 0;
		int i;
	
	for (i = 0; i < 5; i++)
	{
		tot += *(ptr + i);

	}
	return &tot;

}







//funcA(int ptr[])
//funcA(int ptr[5])
funcA(int* ptr)
{


	int i;
	printf("ptr sizeof : %d, %p \n", sizeof(ptr), ptr);
	for(i=0; i<5; i++)
	{
		printf("%d\n", ptr[i]);
	}


}
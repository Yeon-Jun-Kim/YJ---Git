#include <stdio.h>

void myFunc(char* ptr);
/*
	�Լ� ������ : ������ ������ �Լ��� �ּҸ� �����Ͽ�,
	������ ������ �Լ��� ȣ���ϴ� ��.				   
	���� : �ڷ� �� (*������)(���ڸ���Ʈ); 
					   */
int main()
{ 
	void (*fptr)(char *); // �Լ� ������ ���� ���� ���� �Ѱ�.

	int (*ptr)[3];// �ִ� �迭������

	printf("fptr size :  %d\n", sizeof(fptr));

	//myFunc("this is a test.");
	
	fptr = myFunc; // �Լ��� �̸��� �Լ��� �����ּ�.

	(*fptr)("multi campus"); // �Լ�ȣ��
	fptr("advanced c programming");
	return 0;



}


void myFunc(char *ptr)
{
	printf("myfunc() :%p, %s\n", ptr, ptr);




}

void ABC(char* ptr)
{
	printf("myFunc() : %p, %s \n", ptr, ptr);
}
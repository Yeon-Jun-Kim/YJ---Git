#include <stdio.h>
#include <ctype.h>

int main()
{
	int num1,num2;
	char op;

	printf("���ϱ�(a), ����(s), ���ϰ�(m), ������(d) \n");
    printf("������ ù ���ڸ� �Է��ϼ��� ? ");  
	op=toupper(getchar());   // A[enter]
	getchar();
	printf("\n");

	printf("ù ��° �� : ");
	scanf("%d",&num1);  //100

	printf("�� ��° �� : ");
	scanf("%d",&num2);    //30

	if (op == 'A')
		printf("%d + %d = %d \n", num1, num2, num1 + num2);
	else if (op == 'S')
		printf("%d - %d = %d \n", num1, num2, num1 - num2);
	else if (op == 'D')
	
		if (num2 != 0) {

			printf("%d / %d = %d \n", num1, num2, num1 / num2);
		}
		else {
			printf("0���� ���ü� ������");
		}

	else if (op == 'M')
		printf("%d * %d = %d \n", num1, num2, num1*num2);
	else
		printf("���깮�� ����!! \n");

	printf("End. \n");

	return 0 ;
}

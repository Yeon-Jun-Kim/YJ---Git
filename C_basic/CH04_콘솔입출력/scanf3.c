#include <stdio.h>
void func_1();
void func_2();
void func_3();

int main(void)
{
	//func_1();
	func_2();
	//func_3();

	return 0 ;
}

void func_1()
{
    int first, second;
	
	printf("�� ���� �Է��ϼ��� ? "); //100, 200
	scanf("%d%d", &first, &second);

	printf("first : %d, second : %d \n", first, second);
}

void func_2()
{
     int first, second;
	 char op=0;
	 
	 printf("��ȭ��ȣ�� �Է��ϼ��� ? ");//3429-5114
	 //scanf("%d%*%d", &first, &op,  &second); // * c �ѹ��� ������.
	 scanf("%d%c%d", &first, &op, &second);

	 printf("first : %d, second : %d \n", first, second);
	 printf("op: %d, %c \n", op, op);
}

void func_3()
{
     int first, second;
	 
	 printf("5�ڸ��̻� ���ڸ� �Է��ϼ��� ? ");
	 scanf("%3d%d", &first, &second);
	 
	 printf("first : %d, second : %d \n", first, second);
}

// �տ��� 3���� first�� �ִ´�.
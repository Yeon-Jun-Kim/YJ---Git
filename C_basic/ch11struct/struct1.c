#include <stdio.h>


// ����ü : ������ �ִ� ���� �����͵��� �ϳ��� �ڷ������� ����� ����ϰ� �Ѵ�. �� ��������� �ڷ����� ����� ���̴�.
// �̶� �ڷ������� ������ �ڷ����� ���ѹ��� �ʴ´�.
// ����ü�� ��ũ��� �������� ���ͺ��� ���ų� ũ��.
int main()
{
	typedef struct EMPLOYEE {
		char name[20]; //  ������ �θ���. ������ �ƴ�.
		int salary;
		float height;
		char comAddr[50]; 
	} EMP ; // - �ڷ����������� 1
	//�ڷ���/����ü����
	EMP emp = { "ȫ�浿" ,4500000,176.33,"����� ������"};

	typedef struct EMPLOYEE EMP; //�ڷ����������� 2
	EMP tmp; // �ڷ������� ���

	int salary = 1000;
	printf("%d, %d \n", sizeof(emp), sizeof(struct EMPLOYEE));
	printf("%p,%p", &emp,emp.name); // ����ü ��� ������
	
	/*
	printf("����?");//���޷�
	gets(emp.name);
	printf("���� ?");
	scanf("%d", & emp.salary);
	printf("Ű ?");
	scanf("%f%*c", & emp.height);
	printf("ȸ���ּ�");
	gets(emp.comAddr);
	*/
	printf("���� :%s,����: %d,Ű : %0.2f,ȸ���ּ� : %s \n", emp.name, emp.salary, emp.height, emp.comAddr);
	

	tmp = emp;
	printf("���� :%s,����: %d,Ű : %0.2f,ȸ���ּ� : %s \n", tmp.name, tmp.salary, tmp.height, tmp.comAddr);

}
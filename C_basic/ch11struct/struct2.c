#include <stdio.h>

#define EMP_SZ 30

int main()
{
	typedef struct EMPLOYEE {
		char name[20]; //  ������ �θ���. ������ �ƴ�.
		int salary;
		float height;
		char comAddr[50];
	} EMP; // - �ڷ����������� 1
	//�ڷ���/����ü����
	struct EMPLOYEE emp[EMP_SZ] , *ptr; // ����ü �迭�� ����ü�� �迭�� ���
	int i;
	int cn;
	for (i = 0; i < EMP_SZ; i++) {


		printf("����? (�Է������ end)");//���޷�
		gets(emp[i].name);
		if(strcmp(emp[i].name,"end") == 0)
		{
			break;
		}
		printf("���� ?");
		scanf("%d", &emp[i].salary);
		printf("Ű ?");
		scanf("%f%*c", &emp[i].height);
		printf("ȸ���ּ�");
		gets(emp[i].comAddr);
	}
	cn = i;
	ptr = emp;// ����ü�� �ּ� �̱� ������
	for (i = 0; i < cn; i++) {
		printf("���� :%s,����: %d,Ű : %0.2f,ȸ���ּ� : %s \n", ptr->name, ptr->salary, ptr->height, ptr->comAddr);
		ptr++; // ����ü�� ũ�⸸ŭ �ּҰ� �ٲ�ϴ�.
	}

	for (i = 0; i < cn; i++) {
	printf("���� :%s,����: %d,Ű : %0.2f,ȸ���ּ� : %s \n", emp[i].name, emp[i].salary, emp[i].height, emp[i].comAddr);
	}

	
}
#include <stdio.h>
typedef struct EMPLOYEE {
	char name[20]; //  ������ �θ���. ������ �ƴ�.
	int salary;
	float height;
	char comAddr[50];
} EMP; // �������� �����ϸ� 
struct EMPLOYEE funcB();
int main()
{

	EMP emp = { "ȫ�浿" ,4500000,176.33,"����� ������" };
	struct EMPLOYEE my;
	printf("funca() emps : %s, %d, %.2f,%s \n",
		emp.name, emp.salary, emp.height, emp.comAddr);
	//funcA(emp);//���μ�
	funcA(&emp);
	printf("funca() emps : %s, %d, %.2f,%s \n",
		emp.name, emp.salary, emp.height, emp.comAddr);
	my = funcB();
	printf("my emps : %s, %d, %.2f,%s \n",
		my.name, my.salary, my.height, my.comAddr);
	
	
}
struct EMPLOYEE funcB()
{
	struct EMPLOYEE tmp;
	tmp.salary = 232123;
	tmp.height = 162;
	strcpy(tmp.name,"KIM");
	strcpy(tmp.comAddr,"���ؽ�"); // �迭�� �ѹ��� ����Ұ� ���̺귯�� �Լ� �̿��ؾ��� �ֳ��ϸ� �迭������ ������ ����̱� ������.
	

	printf("funcB() emps : %s, %d, %.2f,%s \n",
		tmp.name, tmp.salary, tmp.height, tmp.comAddr);
	
	return tmp;
}


funcA(EMP *emp) // ���μ�
{
	//printf("funca() emps : %s, %d, %.2f,%s \n",
		//emp.name, emp.salary, emp.height, emp.comAddr);
	emp->salary += 200000;// ���������̱� ������ main������ ���� �޶����� ���� ����ü �����ͷ� �����ϸ� ����
}
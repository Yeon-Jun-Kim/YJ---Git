#include <stdio.h>

struct EMP {
	char name[20];
	int age;
	int salary;
} emp[4] = { {"���޷�", 20, 2900000},
	{"������",23,3100000},
	{"�����",27,2300000},
	{NULL} };


int main()
{	
	int i;
	struct EMP* ptr, tmp;
	ptr = emp;
	for (i = 0; *ptr->name; i++) // -> ���� struct  ���� �����Ϳ� ���� �ϰ�   name �� ���������� �ּ��̹Ƿ� * �� �ѹ��� �������.
	{
		printf("%s, %d, %d\n", ptr->name, ptr->age, ptr->salary);
		ptr++;
	}

	ptr = emp;
	tmp = *ptr;
	printf("%s ,%d ,%d \n", tmp.name, tmp.age, tmp.salary);
}
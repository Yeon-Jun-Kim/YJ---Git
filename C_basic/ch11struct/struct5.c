#include <stdio.h>
typedef struct EMPLOYEE {
	char name[20];
	int salary;
	float height;
	char comAddr[50];
} EMP;

int main()
{
	struct EMPLOYEE emp = { "ȫ�浿", 4500000, 173.5,"����� ������" };
	struct EMPLOYEE* ptr; // ����ü ������ ����


	printf("%d, %d \n", sizeof(emp), sizeof(ptr)); // 80 ,4  ����ü������	�����̹Ƿ� 4�̴�.
	ptr = &emp;

	printf("%d\n", ptr->salary); // ->����ü ������ ������ * ���ΰŶ� ���� ���

	printf("%s, %d, %.2f, %s\n", ptr->name, ptr->salary,
		ptr->height, (*ptr).comAddr);
}
